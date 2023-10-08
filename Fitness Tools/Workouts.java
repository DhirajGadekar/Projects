import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.stage.Stage;

public class Workouts {

    VBox vb_button;

    void openNewWindow(Stage primaryStage) {
        Stage newStage = new Stage();
        newStage.setTitle("Workouts");
        newStage.getIcons().add(new Image("Image/logoImage.png"));
        newStage.setResizable(false);

        Group root = new Group();
        VBox vb_root = new VBox(root);

        Button button1 = new Button("Warmup");
        Button button2 = new Button("Biceps");
        Button button3 = new Button("Tricep");
        Button button4 = new Button("chest");
        Button button5 = new Button("Shoulder");
        Button button6 = new Button("Back");
        Button button7 = new Button("Lower Body");
        Button button8 = new Button("Abs");

        Font font = Font.font("Arial", 16);
        BackgroundFill backgroundFill = new BackgroundFill(Color.LIGHTGRAY, null, null);
        Background background = new Background(backgroundFill);

        button1.setBackground(background);
        button1.setMinSize(200, 50); // Set the same values for width and height to make it square
        button1.setFont(font);
        button1.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button2.setBackground(background);
        button2.setMinSize(200, 50); // Set the same values for width and height to make it square
        button2.setFont(font);
        button2.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button3.setBackground(background);
        button3.setMinSize(200, 50); // Set the same values for width and height to make it square
        button3.setFont(font);
        button3.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button4.setBackground(background);
        button4.setMinSize(200, 50); // Set the same values for width and height to make it square
        button4.setFont(font);
        button4.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button5.setBackground(background);
        button5.setMinSize(200, 50); // Set the same values for width and height to make it square
        button5.setFont(font);
        button5.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button6.setBackground(background);
        button6.setMinSize(200, 50); // Set the same values for width and height to make it square
        button6.setFont(font);
        button6.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button7.setBackground(background);
        button7.setMinSize(200, 50); // Set the same values for width and height to make it square
        button7.setFont(font);
        button7.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        button8.setBackground(background);
        button8.setMinSize(200, 50); // Set the same values for width and height to make it square
        button8.setFont(font);
        button8.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        vb_button = new VBox(vb_root);
        ImageView warmup1 = new ImageView("Image/workout/warmup/Across-Chest-Shoulder-Stretch.gif");
        ImageView warmup2 = new ImageView("Image/workout/warmup/Arm-Circles_Shoulders.gif");
        ImageView warmup3 = new ImageView("Image/workout/warmup/bodyweight-lunges.gif");
        ImageView warmup4 = new ImageView("Image/workout/warmup/Butterfly-Stretch.gif");
        ImageView warmup5 = new ImageView("Image/workout/warmup/Seated-Toe-Touches.gif");
        ImageView warmup6 = new ImageView("Image/workout/warmup/Standing-Reach-Up-Back-rotation-Stretch.gif");

        ImageView Biceps1 = new ImageView("Image/workout/biceps/Barbell-Curl.gif");
        ImageView Biceps2 = new ImageView("Image/workout/biceps/Dumbbell-Curl.gif");
        ImageView Biceps3 = new ImageView("Image/workout/biceps/Flexor-Incline-Dumbbell-Curls.gif");
        ImageView Biceps4 = new ImageView("Image/workout/biceps/Hammer-Curl.gif");
        ImageView Biceps5 = new ImageView("Image/workout/biceps/Standing-Barbell-Concentration-Curl.gif");
        ImageView Biceps6 = new ImageView("Image/workout/biceps/waiter-curl.gif");

        ImageView Tricep1 = new ImageView("Image/workout/tricep/Barbell-Triceps-Extension.gif");
        ImageView Tricep2 = new ImageView("Image/workout/tricep/One-Arm-Lying-Triceps-Extension.gif");
        ImageView Tricep3 = new ImageView("Image/workout/tricep/Seated-Dumbbell-Triceps-Extension.gif");
        ImageView Tricep4 = new ImageView("Image/workout/tricep/Dumbbell-Kickback.gif");
        ImageView Tricep5 = new ImageView("Image/workout/tricep/One-arm-triceps-pushdown.gif");
        ImageView Tricep6 = new ImageView("Image/workout/tricep/CHAIR-DIPS.gif");

        ImageView chest1 = new ImageView("Image/workout/chest/Dumbbell-Press-1.gif");
        ImageView chest2 = new ImageView("Image/workout/chest/Incline-Dumbbell-Press.gif");
        ImageView chest3 = new ImageView("Image/workout/chest/High-Cable-Crossover.gif");
        ImageView chest4 = new ImageView("Image/workout/chest/Dumbbell-Fly.gif");
        ImageView chest5 = new ImageView("Image/workout/chest/Dumbbell-Pullover.gif");
        ImageView chest6 = new ImageView("Image/workout/chest/Pec-Deck-Fly.gif");

        ImageView Shoulder1 = new ImageView("Image/workout/sholder/Dumbbell-Push-Press.gif");
        ImageView Shoulder2 = new ImageView("Image/workout/sholder/Smith-Machine-Shoulder-Press.gif");
        ImageView Shoulder3 = new ImageView("Image/workout/sholder/Face-Pull.gif");
        ImageView Shoulder4 = new ImageView("Image/workout/sholder/Dumbbell-Shoulder-Press.gif");
        ImageView Shoulder5 = new ImageView("Image/workout/sholder/Dumbbell-4-Ways-Lateral-Raise.gif");
        ImageView Shoulder6 = new ImageView("Image/workout/sholder/Dumbbell-Lateral-Raise.gif");

        ImageView Back1 = new ImageView("Image/workout/back/Lat-Pulldown.gif");
        ImageView Back2 = new ImageView("Image/workout/back/Seated-Cable-Row.gif");
        ImageView Back3 = new ImageView("Image/workout/back/Dumbbell-Row.gif");
        ImageView Back4 = new ImageView("Image/workout/back/Rope-Straight-Arm-Pulldown.gif");
        ImageView Back5 = new ImageView("Image/workout/back/t-bar-rows.gif");
        ImageView Back6 = new ImageView("Image/workout/back/Dumbbell-Shrug.gif");

        ImageView Lower_Body1 = new ImageView("Image/workout/lowerbody/Dumbbell-Goblet-Squat.gif");
        ImageView Lower_Body2 = new ImageView("Image/workout/lowerbody/LEG-EXTENSION.gif");
        ImageView Lower_Body3 = new ImageView("Image/workout/lowerbody/Seated-Leg-Curl.gif");
        ImageView Lower_Body4 = new ImageView("Image/workout/lowerbody/Leg-Press.gif");
        ImageView Lower_Body5 = new ImageView("Image/workout/lowerbody/Weighted-Back-Extension.gif");
        ImageView Lower_Body6 = new ImageView("Image/workout/lowerbody/Lever-Seated-Calf-Raise.gif");

        ImageView Abs1 = new ImageView("Image/workout/abs/Barbell-Side-Bend.gif");
        ImageView Abs2 = new ImageView("Image/workout/abs/Cross-Crunch.gif");
        ImageView Abs3 = new ImageView("Image/workout/abs/High-Knee-Squat.gif");
        ImageView Abs4 = new ImageView("Image/workout/abs/Leg-Raise-Dragon-Flag.gif");
        ImageView Abs5 = new ImageView("Image/workout/abs/Seated-Side-Crunches.gif");
        ImageView Abs6 = new ImageView("Image/workout/abs/Weighted-Front-Plank.gif");

        Label labelwarmup1 = new Label("    Shoulder-Stretch");
        Label labelwarmup2 = new Label("              Arm-Circles");
        Label labelwarmup3 = new Label("  BodyWeight-lunges");
        Label labelwarmup4 = new Label("        Butterfly-Stretch");
        Label labelwarmup5 = new Label("  Seated-Toe-Touches");
        Label labelwarmup6 = new Label("        Back-rotation");

        Label labelBiceps1 = new Label("       Barbell-Curl");
        Label labelBiceps2 = new Label("                   Dumbbell-Curl");
        Label labelBiceps3 = new Label("       Flexor-IDC");
        Label labelBiceps4 = new Label("                   Hammer-Curl");
        Label labelBiceps5 = new Label("     Standing-Barbell");
        Label labelBiceps6 = new Label("             waiter-curl");

        Label labelTricep1 = new Label("   Barbell-Extension");
        Label labelTricep2 = new Label("       One-ArmExtension");
        Label labelTricep3 = new Label("   Seated-Extension");
        Label labelTricep4 = new Label("       Dumbbell-Kickback");
        Label labelTricep5 = new Label("  One-arm-pushdown");
        Label labelTricep6 = new Label("           CHAIR-DIPS");

        Label labelchest1 = new Label("         Chest-Press");
        Label labelchest2 = new Label("           Incline-Chest-Press");
        Label labelchest3 = new Label("      Cable-Crossover");
        Label labelchest4 = new Label("         Dumbbell-Fly");
        Label labelchest5 = new Label("  Dumbbell-Pullover");
        Label labelchest6 = new Label("                 Pec-Fly");

        Label labelShoulder1 = new Label("          Push-Press");
        Label labelShoulder2 = new Label("              Shoulder-Press");
        Label labelShoulder3 = new Label("        Face-Pull");
        Label labelShoulder4 = new Label("                  Over-Head-Press");
        Label labelShoulder5 = new Label("         Front-Raises");
        Label labelShoulder6 = new Label("                Lateral-Raise");

        Label labelBack1 = new Label("         Lat-Pulldown");
        Label labelBack2 = new Label("               Seated-Row");
        Label labelBack3 = new Label("         One-Arm-Row");
        Label labelBack4 = new Label("             Arm-Pulldown");
        Label labelBack5 = new Label("          t-bar-rows");
        Label labelBack6 = new Label("                      Shrugs");

        Label labelLower_Body1 = new Label("         Goblet-Squat");
        Label labelLower_Body2 = new Label("              Leg-Extension");
        Label labelLower_Body3 = new Label("         Leg-Curl");
        Label labelLower_Body4 = new Label("                        Leg-Press");
        Label labelLower_Body5 = new Label("      Back-Extension");
        Label labelLower_Body6 = new Label("               Seated-Calf");

        Label labelAbs1 = new Label("         Side-Bend");
        Label labelAbs2 = new Label("                 Cross-Crunch");
        Label labelAbs3 = new Label("        Knee-Squat");
        Label labelAbs4 = new Label("                     Leg-Raise");
        Label labelAbs5 = new Label("      Side-Crunches");
        Label labelAbs6 = new Label("             Weighted-Plank");

        labelwarmup1.setTextFill(Color.WHITE);
        labelwarmup1.setStyle("-fx-font-weight: bold;");
        labelwarmup1.setFont(font);
        labelwarmup2.setTextFill(Color.WHITE);
        labelwarmup2.setStyle("-fx-font-weight: bold;");
        labelwarmup2.setFont(font);
        labelwarmup3.setTextFill(Color.WHITE);
        labelwarmup3.setStyle("-fx-font-weight: bold;");
        labelwarmup3.setFont(font);
        labelwarmup4.setTextFill(Color.WHITE);
        labelwarmup4.setStyle("-fx-font-weight: bold;");
        labelwarmup4.setFont(font);
        labelwarmup5.setTextFill(Color.WHITE);
        labelwarmup5.setStyle("-fx-font-weight: bold;");
        labelwarmup5.setFont(font);
        labelwarmup6.setTextFill(Color.WHITE);
        labelwarmup6.setStyle("-fx-font-weight: bold;");
        labelwarmup6.setFont(font);

        labelBiceps1.setTextFill(Color.WHITE);
        labelBiceps1.setStyle("-fx-font-weight: bold;");
        labelBiceps1.setFont(font);
        labelBiceps2.setTextFill(Color.WHITE);
        labelBiceps2.setStyle("-fx-font-weight: bold;");
        labelBiceps2.setFont(font);
        labelBiceps3.setTextFill(Color.WHITE);
        labelBiceps3.setStyle("-fx-font-weight: bold;");
        labelBiceps3.setFont(font);
        labelBiceps4.setTextFill(Color.WHITE);
        labelBiceps4.setStyle("-fx-font-weight: bold;");
        labelBiceps4.setFont(font);
        labelBiceps5.setTextFill(Color.WHITE);
        labelBiceps5.setStyle("-fx-font-weight: bold;");
        labelBiceps5.setFont(font);
        labelBiceps6.setTextFill(Color.WHITE);
        labelBiceps6.setStyle("-fx-font-weight: bold;");
        labelBiceps6.setFont(font);

        labelTricep1.setTextFill(Color.WHITE);
        labelTricep1.setStyle("-fx-font-weight: bold;");
        labelTricep1.setFont(font);
        labelTricep2.setTextFill(Color.WHITE);
        labelTricep2.setStyle("-fx-font-weight: bold;");
        labelTricep2.setFont(font);
        labelTricep3.setTextFill(Color.WHITE);
        labelTricep3.setStyle("-fx-font-weight: bold;");
        labelTricep3.setFont(font);
        labelTricep4.setTextFill(Color.WHITE);
        labelTricep4.setStyle("-fx-font-weight: bold;");
        labelTricep4.setFont(font);
        labelTricep5.setTextFill(Color.WHITE);
        labelTricep5.setStyle("-fx-font-weight: bold;");
        labelTricep5.setFont(font);
        labelTricep6.setTextFill(Color.WHITE);
        labelTricep6.setStyle("-fx-font-weight: bold;");
        labelTricep6.setFont(font);

        labelchest1.setTextFill(Color.WHITE);
        labelchest1.setStyle("-fx-font-weight: bold;");
        labelchest1.setFont(font);
        labelchest2.setTextFill(Color.WHITE);
        labelchest2.setStyle("-fx-font-weight: bold;");
        labelchest2.setFont(font);
        labelchest3.setTextFill(Color.WHITE);
        labelchest3.setStyle("-fx-font-weight: bold;");
        labelchest3.setFont(font);
        labelchest4.setTextFill(Color.WHITE);
        labelchest4.setStyle("-fx-font-weight: bold;");
        labelchest4.setFont(font);
        labelchest5.setTextFill(Color.WHITE);
        labelchest5.setStyle("-fx-font-weight: bold;");
        labelchest5.setFont(font);
        labelchest6.setTextFill(Color.WHITE);
        labelchest6.setStyle("-fx-font-weight: bold;");
        labelchest6.setFont(font);

        labelShoulder1.setTextFill(Color.WHITE);
        labelShoulder1.setStyle("-fx-font-weight: bold;");
        labelShoulder1.setFont(font);
        labelShoulder2.setTextFill(Color.WHITE);
        labelShoulder2.setStyle("-fx-font-weight: bold;");
        labelShoulder2.setFont(font);
        labelShoulder3.setTextFill(Color.WHITE);
        labelShoulder3.setStyle("-fx-font-weight: bold;");
        labelShoulder3.setFont(font);
        labelShoulder4.setTextFill(Color.WHITE);
        labelShoulder4.setStyle("-fx-font-weight: bold;");
        labelShoulder4.setFont(font);
        labelShoulder5.setTextFill(Color.WHITE);
        labelShoulder5.setStyle("-fx-font-weight: bold;");
        labelShoulder5.setFont(font);
        labelShoulder6.setTextFill(Color.WHITE);
        labelShoulder6.setStyle("-fx-font-weight: bold;");
        labelShoulder6.setFont(font);

        labelBack1.setTextFill(Color.WHITE);
        labelBack1.setStyle("-fx-font-weight: bold;");
        labelBack1.setFont(font);
        labelBack2.setTextFill(Color.WHITE);
        labelBack2.setStyle("-fx-font-weight: bold;");
        labelBack2.setFont(font);
        labelBack3.setTextFill(Color.WHITE);
        labelBack3.setStyle("-fx-font-weight: bold;");
        labelBack3.setFont(font);
        labelBack4.setTextFill(Color.WHITE);
        labelBack4.setStyle("-fx-font-weight: bold;");
        labelBack4.setFont(font);
        labelBack5.setTextFill(Color.WHITE);
        labelBack5.setStyle("-fx-font-weight: bold;");
        labelBack5.setFont(font);
        labelBack6.setTextFill(Color.WHITE);
        labelBack6.setStyle("-fx-font-weight: bold;");
        labelBack6.setFont(font);

        labelLower_Body1.setTextFill(Color.WHITE);
        labelLower_Body1.setStyle("-fx-font-weight: bold;");
        labelLower_Body1.setFont(font);
        labelLower_Body2.setTextFill(Color.WHITE);
        labelLower_Body2.setStyle("-fx-font-weight: bold;");
        labelLower_Body2.setFont(font);
        labelLower_Body3.setTextFill(Color.WHITE);
        labelLower_Body3.setStyle("-fx-font-weight: bold;");
        labelLower_Body3.setFont(font);
        labelLower_Body4.setTextFill(Color.WHITE);
        labelLower_Body4.setStyle("-fx-font-weight: bold;");
        labelLower_Body4.setFont(font);
        labelLower_Body5.setTextFill(Color.WHITE);
        labelLower_Body5.setStyle("-fx-font-weight: bold;");
        labelLower_Body5.setFont(font);
        labelLower_Body6.setTextFill(Color.WHITE);
        labelLower_Body6.setStyle("-fx-font-weight: bold;");
        labelLower_Body6.setFont(font);

        labelAbs1.setTextFill(Color.WHITE);
        labelAbs1.setStyle("-fx-font-weight: bold;");
        labelAbs1.setFont(font);
        labelAbs2.setTextFill(Color.WHITE);
        labelAbs2.setStyle("-fx-font-weight: bold;");
        labelAbs2.setFont(font);
        labelAbs3.setTextFill(Color.WHITE);
        labelAbs3.setStyle("-fx-font-weight: bold;");
        labelAbs3.setFont(font);
        labelAbs4.setTextFill(Color.WHITE);
        labelAbs4.setStyle("-fx-font-weight: bold;");
        labelAbs4.setFont(font);
        labelAbs5.setTextFill(Color.WHITE);
        labelAbs5.setStyle("-fx-font-weight: bold;");
        labelAbs5.setFont(font);
        labelAbs6.setTextFill(Color.WHITE);
        labelAbs6.setStyle("-fx-font-weight: bold;");
        labelAbs6.setFont(font);

        double imageWidth = 170; // Adjust the width as needed
        double imageHeight = 120; // Adjust the height as needed

        warmup1.setFitWidth(imageWidth);
        warmup1.setFitHeight(imageHeight);
        warmup2.setFitWidth(imageWidth);
        warmup2.setFitHeight(imageHeight);
        warmup3.setFitWidth(imageWidth);
        warmup3.setFitHeight(imageHeight);
        warmup4.setFitWidth(imageWidth);
        warmup4.setFitHeight(imageHeight);
        warmup5.setFitWidth(imageWidth);
        warmup5.setFitHeight(imageHeight);
        warmup6.setFitWidth(imageWidth);
        warmup6.setFitHeight(imageHeight);

        Biceps1.setFitWidth(imageWidth);
        Biceps1.setFitHeight(imageHeight);
        Biceps2.setFitWidth(imageWidth);
        Biceps2.setFitHeight(imageHeight);
        Biceps3.setFitWidth(imageWidth);
        Biceps3.setFitHeight(imageHeight);
        Biceps4.setFitWidth(imageWidth);
        Biceps4.setFitHeight(imageHeight);
        Biceps5.setFitWidth(imageWidth);
        Biceps5.setFitHeight(imageHeight);
        Biceps6.setFitWidth(imageWidth);
        Biceps6.setFitHeight(imageHeight);

        Tricep1.setFitWidth(imageWidth);
        Tricep1.setFitHeight(imageHeight);
        Tricep2.setFitWidth(imageWidth);
        Tricep2.setFitHeight(imageHeight);
        Tricep3.setFitWidth(imageWidth);
        Tricep3.setFitHeight(imageHeight);
        Tricep4.setFitWidth(imageWidth);
        Tricep4.setFitHeight(imageHeight);
        Tricep5.setFitWidth(imageWidth);
        Tricep5.setFitHeight(imageHeight);
        Tricep6.setFitWidth(imageWidth);
        Tricep6.setFitHeight(imageHeight);

        chest1.setFitWidth(imageWidth);
        chest1.setFitHeight(imageHeight);
        chest2.setFitWidth(imageWidth);
        chest2.setFitHeight(imageHeight);
        chest3.setFitWidth(imageWidth);
        chest3.setFitHeight(imageHeight);
        chest4.setFitWidth(imageWidth);
        chest4.setFitHeight(imageHeight);
        chest5.setFitWidth(imageWidth);
        chest5.setFitHeight(imageHeight);
        chest6.setFitWidth(imageWidth);
        chest6.setFitHeight(imageHeight);

        Shoulder1.setFitWidth(imageWidth);
        Shoulder1.setFitHeight(imageHeight);
        Shoulder2.setFitWidth(imageWidth);
        Shoulder2.setFitHeight(imageHeight);
        Shoulder3.setFitWidth(imageWidth);
        Shoulder3.setFitHeight(imageHeight);
        Shoulder4.setFitWidth(imageWidth);
        Shoulder4.setFitHeight(imageHeight);
        Shoulder5.setFitWidth(imageWidth);
        Shoulder5.setFitHeight(imageHeight);
        Shoulder6.setFitWidth(imageWidth);
        Shoulder6.setFitHeight(imageHeight);

        Back1.setFitWidth(imageWidth);
        Back1.setFitHeight(imageHeight);
        Back2.setFitWidth(imageWidth);
        Back2.setFitHeight(imageHeight);
        Back3.setFitWidth(imageWidth);
        Back3.setFitHeight(imageHeight);
        Back4.setFitWidth(imageWidth);
        Back4.setFitHeight(imageHeight);
        Back5.setFitWidth(imageWidth);
        Back5.setFitHeight(imageHeight);
        Back6.setFitWidth(imageWidth);
        Back6.setFitHeight(imageHeight);

        Lower_Body1.setFitWidth(imageWidth);
        Lower_Body1.setFitHeight(imageHeight);
        Lower_Body2.setFitWidth(imageWidth);
        Lower_Body2.setFitHeight(imageHeight);
        Lower_Body3.setFitWidth(imageWidth);
        Lower_Body3.setFitHeight(imageHeight);
        Lower_Body4.setFitWidth(imageWidth);
        Lower_Body4.setFitHeight(imageHeight);
        Lower_Body5.setFitWidth(imageWidth);
        Lower_Body5.setFitHeight(imageHeight);
        Lower_Body6.setFitWidth(imageWidth);
        Lower_Body6.setFitHeight(imageHeight);

        Abs1.setFitWidth(imageWidth);
        Abs1.setFitHeight(imageHeight);
        Abs2.setFitWidth(imageWidth);
        Abs2.setFitHeight(imageHeight);
        Abs3.setFitWidth(imageWidth);
        Abs3.setFitHeight(imageHeight);
        Abs4.setFitWidth(imageWidth);
        Abs4.setFitHeight(imageHeight);
        Abs5.setFitWidth(imageWidth);
        Abs5.setFitHeight(imageHeight);
        Abs6.setFitWidth(imageWidth);
        Abs6.setFitHeight(imageHeight);

        HBox hb_1 = new HBox(50);
        hb_1.setPrefSize(20, 20);

        HBox hb_2 = new HBox(50);
        hb_2.setPrefSize(20, 20);

        HBox hb_3 = new HBox(50);
        hb_3.setPrefSize(20, 20);

        HBox hb_4 = new HBox(50);
        hb_4.setPrefSize(20, 20);

        HBox hb_5 = new HBox(50);
        hb_5.setPrefSize(20, 20);

        HBox hb_6 = new HBox(50);
        hb_6.setPrefSize(20, 20);

        VBox vb_screen = new VBox(10, hb_1, hb_2, hb_3, hb_4, hb_5, hb_6);
        vb_screen.setStyle("-fx-padding : 0 0 0 50");

        HBox hb_todo = new HBox(vb_button, vb_screen);
        hb_todo.setStyle("-fx-background-color : black; -fx-padding : 70 0 0 70");

        button1.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(warmup1, warmup2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelwarmup1, labelwarmup2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(warmup3, warmup4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelwarmup3, labelwarmup4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(warmup5, warmup6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelwarmup5, labelwarmup6);

        });

        button2.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Biceps1, Biceps2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelBiceps1, labelBiceps2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Biceps3, Biceps4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelBiceps3, labelBiceps4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Biceps5, Biceps6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelBiceps5, labelBiceps6);

        });

        button3.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Tricep1, Tricep2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelTricep1, labelTricep2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Tricep3, Tricep4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelTricep3, labelTricep4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Tricep5, Tricep6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelTricep5, labelTricep6);

        });

        button4.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(chest1, chest2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelchest1, labelchest2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(chest3, chest4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelchest3, labelchest4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(chest5, chest6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelchest5, labelchest6);

        });
        button5.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Shoulder1, Shoulder2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelShoulder1, labelShoulder2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Shoulder3, Shoulder4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelShoulder3, labelShoulder4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Shoulder5, Shoulder6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelShoulder5, labelShoulder6);

        });

        button6.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Back1, Back2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelBack1, labelBack2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Back3, Back4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelBack3, labelBack4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Back5, Back6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelBack5, labelBack6);

        });

        button7.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Lower_Body1, Lower_Body2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelLower_Body1, labelLower_Body2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Lower_Body3, Lower_Body4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelLower_Body3, labelLower_Body4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Lower_Body5, Lower_Body6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelLower_Body5, labelLower_Body6);
        });

        button8.setOnAction(e -> {

            hb_1.getChildren().clear();
            hb_1.getChildren().addAll(Abs1, Abs2);
            hb_2.getChildren().clear();
            hb_2.getChildren().addAll(labelAbs1, labelAbs2);
            hb_3.getChildren().clear();
            hb_3.getChildren().addAll(Abs3, Abs4);
            hb_4.getChildren().clear();
            hb_4.getChildren().addAll(labelAbs3, labelAbs4);
            hb_5.getChildren().clear();
            hb_5.getChildren().addAll(Abs5, Abs6);
            hb_6.getChildren().clear();
            hb_6.getChildren().addAll(labelAbs5, labelAbs6);

        });

        StackPane stackPane1 = new StackPane();
        StackPane stackPane2 = new StackPane();
        StackPane stackPane3 = new StackPane();
        StackPane stackPane4 = new StackPane();
        StackPane stackPane5 = new StackPane();
        StackPane stackPane6 = new StackPane();
        StackPane stackPane7 = new StackPane();
        StackPane stackPane8 = new StackPane();

        stackPane1.getChildren().add(button1);
        stackPane2.getChildren().add(button2);
        stackPane3.getChildren().add(button3);
        stackPane4.getChildren().add(button4);
        stackPane5.getChildren().add(button5);
        stackPane6.getChildren().add(button6);
        stackPane7.getChildren().add(button7);
        stackPane8.getChildren().add(button8);

        stackPane1.setLayoutX(60);
        stackPane1.setLayoutY(60);
        stackPane2.setLayoutX(60);
        stackPane2.setLayoutY(120);
        stackPane3.setLayoutX(60);
        stackPane3.setLayoutY(180);
        stackPane4.setLayoutX(60);
        stackPane4.setLayoutY(240);
        stackPane5.setLayoutX(60);
        stackPane5.setLayoutY(300);
        stackPane6.setLayoutX(60);
        stackPane6.setLayoutY(360);
        stackPane7.setLayoutX(60);
        stackPane7.setLayoutY(420);
        stackPane8.setLayoutX(60);
        stackPane8.setLayoutY(480);

        // root.getChildren().add(imageView);
        root.getChildren().add(stackPane1);
        root.getChildren().add(stackPane2);
        root.getChildren().add(stackPane3);
        root.getChildren().add(stackPane4);
        root.getChildren().add(stackPane5);
        root.getChildren().add(stackPane6);
        root.getChildren().add(stackPane7);
        root.getChildren().add(stackPane8);

        // Scene sc_root = new Scene(hb_todo);
        Scene scene = new Scene(hb_todo, 800, 600);
        newStage.setScene(scene);
        newStage.show();
    }
}