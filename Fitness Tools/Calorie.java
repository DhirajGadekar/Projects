import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
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

class InvalidData extends RuntimeException {
    /**
     * Custom exception for invalid data.
     *
     * @param msg The error message.
     */
    InvalidData(String msg) {

        super(msg);
    }
}

/**
 * The Calorie class represents a JavaFX application for calculating daily
 * calorie needs.
 */
public class Calorie {
    /**
     * Opens a new window for the Calorie Calculator application.
     *
     * @param mainStage The main stage of the application.
     */
    public void openNewWindow(Stage mainStage) {
        // Code for creating and configuring a new stage with UI components.
        Stage newStage = new Stage();
        newStage.setTitle("Calorie Calculator");
        newStage.setResizable(false);
        newStage.getIcons().add(new Image("Image/logoImage.png"));

        Color paint = new Color(0.1684, 0.1684, 0.1684, 1.0);
        Group root = new Group();
        Scene scene = new Scene(root, 800, 600, paint);

        Button backButton = new Button("<- Back");

        Image image = new Image("Image/images.jpeg");
        ImageView imageView = new ImageView(image);
        imageView.setFitWidth(850);
        imageView.setFitHeight(700);
        imageView.setPreserveRatio(false);

        Font font = Font.font("Arial", 16);
        BackgroundFill backgroundFill = new BackgroundFill(Color.LIGHTGRAY, null, null);
        Background background = new Background(backgroundFill);

        backButton.setBackground(background);
        backButton.setMinSize(100, 40);
        backButton.setMaxSize(100, 40);
        backButton.setStyle("-fx-font-weight: bold; -fx-background-radius: 100px;");

        StackPane stackPane = new StackPane();
        stackPane.getChildren().add(backButton);
        stackPane.setLayoutX(20);
        stackPane.setLayoutY(20);

        Label genderLabel = new Label("Gender           : ");
        genderLabel.setFont(font);
        genderLabel.setTextFill(Color.WHITE);
        genderLabel.setStyle("-fx-font-weight: bold;");

        ComboBox<String> genderComboBox = new ComboBox<>();
        genderComboBox.getItems().addAll("Male", "Female");
        genderComboBox.setMinWidth(500);
        genderComboBox.setMinHeight(50);
        genderComboBox.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        genderComboBox.setPromptText("gender");

        Label ageLabel = new Label("Age                 : ");
        ageLabel.setFont(font);
        ageLabel.setTextFill(Color.WHITE);
        ageLabel.setStyle("-fx-font-weight: bold;");

        TextField ageTextField = new TextField();
        ageTextField.setMinWidth(500);
        ageTextField.setMinHeight(50);
        ageTextField.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        ageTextField.setFont(font);
        ageTextField.setPromptText("Enter Age");

        Label weightLabel = new Label("Weight (kg)    : ");
        weightLabel.setTextFill(Color.WHITE);
        weightLabel.setFont(font);
        weightLabel.setStyle("-fx-font-weight: bold;");

        TextField weightTextField = new TextField();
        weightTextField.setMinWidth(500);
        weightTextField.setMinHeight(50);
        weightTextField.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        weightTextField.setFont(font);
        weightTextField.setPromptText("Enter Weight");

        Label heightLabel = new Label("Height (cm)    : ");
        heightLabel.setTextFill(Color.WHITE);
        heightLabel.setFont(font);
        heightLabel.setStyle("-fx-font-weight: bold;");

        TextField heightTextField = new TextField();
        heightTextField.setMinWidth(500);
        heightTextField.setMinHeight(50);
        heightTextField.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        heightTextField.setFont(font);
        heightTextField.setPromptText("Enter Height");

        Label activityLabel = new Label("Activity Level : ");
        activityLabel.setFont(font);
        activityLabel.setTextFill(Color.WHITE);
        activityLabel.setStyle("-fx-font-weight: bold;");

        ComboBox<String> activityComboBox = new ComboBox<>();
        activityComboBox.getItems().addAll("Sedentary", "Lightly Active", "Moderately Active", "Very Active");
        activityComboBox.setMinWidth(500);
        activityComboBox.setMinHeight(50);
        activityComboBox.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        activityComboBox.setPromptText("what is your activity level");

        Button calculateButton = new Button("Calculate");
        calculateButton.setLayoutX(150);
        calculateButton.setLayoutY(10);
        calculateButton.setBackground(background);
        calculateButton.setTextFill(paint);
        calculateButton.setMinWidth(200);
        calculateButton.setMinHeight(50);
        calculateButton.setFont(new Font("Arial", 18));
        calculateButton.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        Label resultLabel = new Label();
        resultLabel.setMinWidth(500);
        resultLabel.setMinHeight(50);
        resultLabel.setTextFill(Color.WHITE);
        resultLabel.setAlignment(Pos.CENTER);
        resultLabel.setFont(new Font("Arial", 24));
        resultLabel.setStyle("-fx-font-weight: bold;");

        HBox h1 = new HBox(10);
        HBox h2 = new HBox(10);
        HBox h3 = new HBox(10);
        HBox h4 = new HBox(10);
        HBox h5 = new HBox(10);
        HBox h6 = new HBox(10);
        HBox h7 = new HBox(10);

        h1.setAlignment(Pos.CENTER);
        h2.setAlignment(Pos.CENTER);
        h3.setAlignment(Pos.CENTER);
        h4.setAlignment(Pos.CENTER);
        h5.setAlignment(Pos.CENTER);
        h6.setAlignment(Pos.CENTER);
        h7.setAlignment(Pos.CENTER);

        h1.getChildren().addAll(genderLabel, genderComboBox);
        h2.getChildren().addAll(ageLabel, ageTextField);
        h3.getChildren().addAll(weightLabel, weightTextField);
        h4.getChildren().addAll(heightLabel, heightTextField);
        h5.getChildren().addAll(activityLabel, activityComboBox);
        h6.getChildren().addAll(calculateButton);
        h7.getChildren().addAll(resultLabel);

        VBox vbox1 = new VBox(10);
        vbox1.getChildren().addAll(backButton);
        vbox1.setPadding(new Insets(10, 10, 10, 10));

        VBox vbox = new VBox(20);
        vbox.setPadding(new Insets(80, 10, 10, 70));
        vbox.getChildren().addAll(h1, h2, h3, h4, h5, h6, h7);

        calculateButton.setOnAction(event -> {
            double age = 0.0, weight = 0.0, height = 0.0, activityMultiplier = 0.0, basalMetabolicRate = 0.0;
            try {
                age = Double.parseDouble(ageTextField.getText());
                weight = Double.parseDouble(weightTextField.getText());
                height = Double.parseDouble(heightTextField.getText());

                activityMultiplier = getActivityMultiplier(activityComboBox.getValue());
                basalMetabolicRate = calculateBMR(genderComboBox.getValue(), age, weight, height);
            } catch (NumberFormatException e) {

                resultLabel.setText("Enter Valid Data");
            } catch (NullPointerException npe) {

                resultLabel.setText("Value Not Found");
            }
            if (age == 0 || weight == 0 || height == 0 || activityMultiplier == 0 || basalMetabolicRate == 0) {

                try {

                    throw new InvalidData("Value Not Found");
                } catch (InvalidData id) {

                    resultLabel.setText(id.getMessage());
                }
            } else if (age > 120 || age <= 0) {

                try {

                    throw new InvalidData("Enter Valid Age");
                } catch (InvalidData id) {

                    resultLabel.setText(id.getMessage());
                }
            } else if (weight > 250 || weight < 2) {

                try {

                    throw new InvalidData("Enter Valid Weight");
                } catch (InvalidData id) {

                    resultLabel.setText(id.getMessage());
                }

            } else if (height > 250 || height < 20) {

                try {

                    throw new InvalidData("Enter Valid Height");
                } catch (InvalidData id) {

                    resultLabel.setText(id.getMessage());
                }
            } else {
                double dailyCalorieNeeds = basalMetabolicRate * activityMultiplier;
                resultLabel.setText("Daily Calorie Needs: " + String.format("%.2f", dailyCalorieNeeds) + " calories");
            }
        });

        backButton.setOnAction(event -> {

            mainStage.show();
            newStage.close();
        });

        root.getChildren().addAll(imageView, vbox, vbox1);
        newStage.setScene(scene);
        newStage.show();
    }

    /**
     * Calculates the activity multiplier based on the selected activity level.
     *
     * @param activityLevel The selected activity level.
     * @return The activity multiplier.
     */
    private double getActivityMultiplier(String activityLevel) {
        switch (activityLevel) {
            case "Sedentary":
                return 1.2;
            case "Lightly Active":
                return 1.375;
            case "Moderately Active":
                return 1.55;
            case "Very Active":
                return 1.725;
            default:
                return 1.2;
        }
    }

    /**
     * Calculates the Basal Metabolic Rate (BMR) based on gender, age, weight, and
     * height.
     *
     * @param gender The gender of the user (Male or Female).
     * @param age    The age of the user.
     * @param weight The weight of the user (in kilograms).
     * @param height The height of the user (in centimeters).
     * @return The calculated BMR.
     */
    private double calculateBMR(String gender, double age, double weight, double height) {
        if (gender.equals("Male")) {
            return 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
        } else {
            return 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
        }
    }
}