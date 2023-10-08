import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.stage.Stage;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) {

        primaryStage.setTitle("Fitness Tools");
        primaryStage.getIcons().add(new Image("Image/logoImage.png"));
        primaryStage.setResizable(false);

        Group root = new Group();
        Scene scene = new Scene(root, 800, 600, Color.BLACK);

        Image logo = new Image("Image/c2wfitness.png");
        ImageView logoImageView = new ImageView(logo);
        logoImageView.setFitWidth(470);
        logoImageView.setFitHeight(700);
        logoImageView.setX(10);
        logoImageView.setY(-150);
        logoImageView.setPreserveRatio(true);

        Image image = new Image("Image/gymBack.png");
        ImageView imageView = new ImageView(image);
        imageView.setFitWidth(900);
        imageView.setFitHeight(800);
        imageView.setPreserveRatio(true);

        Button button1 = new Button("Workouts");
        Button button2 = new Button("BMI Calculator");
        Button button3 = new Button("Calorie Calculator");
        Button button4 = new Button("About");
        Button button5 = new Button("Exit");

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

        button1.setOnAction(e -> {

            Workouts workouts = new Workouts();
            workouts.openNewWindow(primaryStage);
        });

        button2.setOnAction(e -> {

            BMICalculator bmicalorie = new BMICalculator();
            bmicalorie.openNewWindow(primaryStage);
            primaryStage.close();
        });

        button3.setOnAction(e -> {

            Calorie calorie = new Calorie();
            calorie.openNewWindow(primaryStage);
            primaryStage.close();
        });

        button4.setOnAction(e -> {

            About about = new About();
            about.openNewWindow(primaryStage);
            primaryStage.close();
        });

        button5.setOnAction(e -> {

            System.exit(0);
        });

        StackPane stackPane1 = new StackPane();
        StackPane stackPane2 = new StackPane();
        StackPane stackPane3 = new StackPane();
        StackPane stackPane4 = new StackPane();
        StackPane stackPane5 = new StackPane();

        stackPane1.getChildren().add(button1);
        stackPane2.getChildren().add(button2);
        stackPane3.getChildren().add(button3);
        stackPane4.getChildren().add(button4);
        stackPane5.getChildren().add(button5);

        stackPane1.setLayoutX(60);
        stackPane1.setLayoutY(170);
        stackPane2.setLayoutX(60);
        stackPane2.setLayoutY(240);
        stackPane3.setLayoutX(60);
        stackPane3.setLayoutY(310);
        stackPane4.setLayoutX(60);
        stackPane4.setLayoutY(380);
        stackPane5.setLayoutX(60);
        stackPane5.setLayoutY(450);

        root.getChildren().add(stackPane1);
        root.getChildren().add(stackPane2);
        root.getChildren().add(stackPane3);
        root.getChildren().add(stackPane4);
        root.getChildren().add(stackPane5);
        root.getChildren().add(imageView);
        root.getChildren().add(logoImageView);

        primaryStage.setScene(scene);
        primaryStage.show();

    }

    public static void main(String[] args) {

        launch(args);
    }
}