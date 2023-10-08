
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.stage.Stage;

class InvalidData extends RuntimeException {
    public InvalidData(String msg) {
        super(msg);
    }
}

public class BMICalculator {

    public void bmiPrint(double bmi, Label catagory) {

        if (bmi > 30) {
            catagory.setText("You are Obese (BMI > 30)");
            catagory.setBackground(new Background(new BackgroundFill(Color.RED, null, null)));
            catagory.setTextFill(Color.WHITE);
        } else if (bmi > 25 && bmi <= 30) {
            catagory.setText("You are Overweight (25 < BMI <= 30)");
            catagory.setBackground(new Background(new BackgroundFill(Color.ORANGE, null, null)));
            catagory.setTextFill(Color.BLACK);
        } else if (bmi >= 18.5 && bmi <= 25) {
            catagory.setText("Your weight is Normal (18.5 <= BMI <= 25)");
            catagory.setBackground(new Background(new BackgroundFill(Color.GREEN, null, null)));
            catagory.setTextFill(Color.WHITE);
        } else if (bmi < 18.5) {
            catagory.setText("You are Underweight (BMI < 18.5)");
            catagory.setBackground(new Background(new BackgroundFill(Color.YELLOW, null, null)));
            catagory.setTextFill(Color.BLACK);
        }
    }

    public void openNewWindow(Stage primaryStage) {
        Stage newStage = new Stage();
        newStage.setTitle("BMI Calculator");
        newStage.setResizable(false);
        newStage.getIcons().add(new Image("Image/logoImage.png"));

        Color paint = new Color(0.1684, 0.1684, 0.1684, 1.0);
        Group root = new Group();
        Scene scene = new Scene(root, 800, 600, paint);

        Font font = new Font("Arial", 20);
        BackgroundFill backgroundFill = new BackgroundFill(Color.LIGHTGRAY, null, null);
        Background background = new Background(backgroundFill);

        Image image = new Image("Image/images.jpeg");
        ImageView imageView = new ImageView(image);
        imageView.setFitWidth(850);
        imageView.setFitHeight(700);
        imageView.setPreserveRatio(false);

        Button backButton = new Button("<- Back");
        backButton.setBackground(background);
        backButton.setMinSize(100, 40);
        backButton.setMaxSize(100, 40);
        backButton.setStyle("-fx-font-weight: bold; -fx-background-radius: 100px;");

        Label weightLabel = new Label("Enter your weight (kg) : ");
        TextField weightField = new TextField();

        Label heightLabel = new Label("Enter your height (cm) : ");
        TextField heightField = new TextField();

        Button calculateButton = new Button("Calculate BMI");

        Label resultLabel = new Label();
        Label catagory = new Label();
        catagory.setMinWidth(500);
        catagory.setMinHeight(50);
        catagory.setAlignment(Pos.CENTER);
        catagory.setFont(new Font("Arial", 24));
        catagory.setStyle("-fx-font-weight: bold;-fx-border-radius: 10px;");

        weightLabel.setFont(font);
        weightLabel.setTextFill(Color.WHITE);
        weightLabel.setStyle("-fx-font-weight: bold;");
        heightLabel.setFont(font);
        heightLabel.setTextFill(Color.WHITE);
        heightLabel.setStyle("-fx-font-weight: bold;");

        calculateButton.setLayoutX(150);
        calculateButton.setLayoutY(10);
        calculateButton.setBackground(background);
        calculateButton.setTextFill(paint);
        calculateButton.setMinWidth(200);
        calculateButton.setMinHeight(50);
        calculateButton.setFont(new Font("Arial", 18));
        calculateButton.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");

        weightField.setMinWidth(500);
        weightField.setMinHeight(50);
        weightField.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        weightField.setFont(font);
        weightField.setPromptText("Enter Weight");

        heightField.setMinWidth(500);
        heightField.setMinHeight(50);
        heightField.setStyle("-fx-font-weight: bold; -fx-background-radius: 15px;");
        heightField.setFont(font);
        heightField.setPromptText("Enter Height");

        resultLabel.setMinWidth(500);
        resultLabel.setMinHeight(50);
        resultLabel.setTextFill(Color.WHITE);
        resultLabel.setAlignment(Pos.CENTER);
        resultLabel.setFont(font);
        resultLabel.setStyle("-fx-font-weight: bold;");

        calculateButton.setOnAction(e -> {
            double weight = 0, height = 0;
            try {
                weight = Double.parseDouble(weightField.getText());
                height = Double.parseDouble(heightField.getText());

            } catch (NumberFormatException ex) {
                resultLabel.setText("Please enter valid numbers for weight and height.");
                catagory.setText("");
                catagory.setBackground(new Background(new BackgroundFill(null, null, null)));
            }

            if ((weight > 250 || weight <= 0) && (height > 250 || height <= 0)) {
                try {

                    throw new InvalidData("Enter Valid Weight and Height");
                } catch (InvalidData i) {
                    resultLabel.setText(i.getMessage());
                    catagory.setText("");
                    catagory.setBackground(new Background(new BackgroundFill(null, null, null)));
                }
            } else if (weight > 250 || weight <= 0) {
                try {

                    throw new InvalidData("Enter Valid Weight");
                } catch (InvalidData i) {
                    resultLabel.setText(i.getMessage());
                    catagory.setText("");
                    catagory.setBackground(new Background(new BackgroundFill(null, null, null)));
                }
            } else if (height > 250 || height <= 0) {
                try {

                    throw new InvalidData("Enter Valid Height");
                } catch (InvalidData i) {
                    resultLabel.setText(i.getMessage());
                    catagory.setText("");
                    catagory.setBackground(new Background(new BackgroundFill(null, null, null)));
                }
            } else {
                height = height / 100;
                double bmi = calculateBMI(weight, height);
                resultLabel.setText("Your BMI: " + String.format("%.2f", bmi));
                bmiPrint(bmi, catagory);
            }
        });

        AnchorPane stackPane = new AnchorPane();
        stackPane.getChildren().add(calculateButton);
        stackPane.setLayoutX(60);
        stackPane.setLayoutY(60);

        VBox layout = new VBox(10);
        VBox vbox1 = new VBox(10);
        vbox1.getChildren().addAll(backButton);
        vbox1.setPadding(new Insets(10, 10, 10, 10));

        layout.getChildren().addAll(weightLabel, weightField, heightLabel, heightField, stackPane,
                resultLabel, catagory);
        layout.setPadding(new Insets(120, 10, 10, 170));

        root.getChildren().addAll(imageView, layout, vbox1);
        newStage.setScene(scene);

        backButton.setOnAction(event -> {

            primaryStage.show();
            newStage.close();
        });

        newStage.show();
    }

    private double calculateBMI(double weight, double height) {
        return weight / (height * height);
    }

}