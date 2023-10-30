package Screens;

import JDBC.CreateUser;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.stage.Stage;

public class SignUp {

    public void setLabelUI(Label label) {

        Font font = Font.font("Arial", 16);

        label.setTextFill(Color.WHITE);
        label.setFont(font);
        label.setStyle("-fx-font-weight: bold;-fx-text-fill: #790092;");
    }

    public void OpenNewWindow(Stage mainStage) {
        Stage stage = new Stage();
        stage.getIcons().add(new Image("Images/BeatBox_logo.png"));
        stage.setTitle("BeatBox");
        stage.setResizable(false);

        Group root = new Group();
        Scene scene = new Scene(root, 1400, 990);
        Image loginBack = new Image("Images/loginBack.jpg");
        ImageView imageView = new ImageView(loginBack);
        imageView.setFitHeight(stage.getHeight());
        imageView.setFitWidth(stage.getWidth());
        imageView.setX(-150);
        imageView.setPreserveRatio(true);

        Image logo = new Image("Images/BeatBox_logo.png");
        ImageView logoView = new ImageView(logo);
        logoView.setFitHeight(120);
        logoView.setFitWidth(120);
        logoView.setLayoutX(950);
        logoView.setLayoutY(180);
        logoView.setPreserveRatio(true);

        Label username = new Label();
        username.setText("Username                :");
        setLabelUI(username);

        TextField usernameField = new TextField();
        usernameField.setPromptText("Enter Username");
        usernameField.setStyle("-fx-border-color: #790092; -fx-border-radius: 10; -fx-background-radius: 10;");
        usernameField.setMinWidth(250);
        usernameField.setMinHeight(40);

        Label password = new Label();
        password.setText("New Password       : ");
        setLabelUI(password);

        PasswordField newPassField = new PasswordField();
        newPassField.setPromptText("Enter New Password");
        newPassField.setStyle("-fx-border-color: #790092; -fx-border-radius: 10; -fx-background-radius: 10;");
        newPassField.setMinWidth(250);
        newPassField.setMinHeight(40);

        Label phone = new Label();
        phone.setText("Phone Number       : ");
        setLabelUI(phone);

        TextField phoneNumberField = new TextField();
        phoneNumberField.setPromptText("Enter Phone Number");
        phoneNumberField.setStyle("-fx-border-color: #790092; -fx-border-radius: 10; -fx-background-radius: 10;");
        phoneNumberField.setMinWidth(250);
        phoneNumberField.setMinHeight(40);

        Button signupButton = new Button();
        signupButton.setText("SignUp");
        signupButton.setStyle(
                "-fx-font-size: 18px; -fx-font-weight: bold; -fx-text-fill: WHITE; -fx-background-color: #790092; -fx-background-radius: 7");
        signupButton.setMinSize(150, 40);

        Label resultLabel = new Label();
        setLabelUI(resultLabel);

        Button back = new Button("", new ImageView(new Image("Images/backBtn.png")));
        back.setStyle("-fx-background-color: transparent;");

        signupButton.setOnAction(event -> {

            String usr = usernameField.getText();
            String pwd = newPassField.getText();
            String phoneNumber = phoneNumberField.getText();

            if (usr.equals("")) {

                resultLabel.setText("Enter valid Username");
            } else if (pwd.equals("")) {

                resultLabel.setText("Enter valid password");
            } else if (phoneNumber.equals("")) {

                resultLabel.setText("Enter valid phone number");
            } else {
                Alert infoAlert = new Alert(AlertType.INFORMATION);
                CreateUser user = new CreateUser(usr, pwd, phoneNumber);
                if (user.createUser()) {

                    infoAlert.setTitle("Alert !!!");
                    infoAlert.setHeaderText("Account Created...");
                    infoAlert.showAndWait();
                    mainStage.show();
                } else {
                    infoAlert.setTitle("Alert !!!");
                    infoAlert.setHeaderText("Error!!!!");
                    infoAlert.showAndWait();
                }
            }
        });

        back.setOnAction(event -> {
            stage.close();
            mainStage.show();
        });

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
        // h6.setAlignment(Pos.TOP_LEFT);
        h7.setAlignment(Pos.CENTER);

        h1.getChildren().addAll(username, usernameField);
        h2.getChildren().addAll(password, newPassField);
        h3.getChildren().addAll(phone, phoneNumberField);
        h4.getChildren().add(signupButton);
        h5.getChildren().add(resultLabel);
        h6.getChildren().add(back);
        h7.getChildren().add(logoView);

        VBox vb = new VBox(30);
        vb.setPadding(new Insets(10, 10, 10, 10));
        vb.getChildren().add(h6);
        VBox vbox = new VBox(30);
        vbox.setPadding(new Insets(150, 10, 10, 700));
        vbox.getChildren().addAll(h7, h1, h2, h3, h4, h5);

        HBox hbox = new HBox(10);
        hbox.getChildren().addAll(vb, vbox);

        root.getChildren().addAll(imageView, hbox);
        stage.setScene(scene);
        stage.show();
    }
}
