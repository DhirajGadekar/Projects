package Screens;

import JDBC.Login;
import javafx.application.Application;
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

public class Main extends Application {

    public void setLabelUI(Label label) {

        Font font = Font.font("Arial", 20);

        label.setTextFill(Color.WHITE);
        label.setFont(font);
        label.setStyle("-fx-font-weight: bold;-fx-text-fill: #790092;");
    }

    @Override
    public void start(Stage primaryStage) throws Exception {

        primaryStage.setTitle("BeatBox");
        primaryStage.getIcons().add(new Image("Images/BeatBox_logo.png"));
        primaryStage.setResizable(false);

        Group root = new Group();
        Scene scene = new Scene(root, 1400, 990);

        Image loginBack = new Image("Images/loginBack.jpg");
        ImageView imageView = new ImageView(loginBack);
        imageView.setFitHeight(primaryStage.getHeight());
        imageView.setFitWidth(primaryStage.getHeight());
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
        username.setText("Username : ");
        setLabelUI(username);

        TextField usernameField = new TextField();
        usernameField.setPromptText("Enter Username");
        usernameField.setStyle("-fx-border-color: #790092; -fx-border-radius: 10; -fx-background-radius: 10;");
        usernameField.setMinWidth(250);
        usernameField.setMinHeight(40);

        Label password = new Label();
        password.setText("Password : ");
        setLabelUI(password);

        PasswordField passwordField = new PasswordField();
        passwordField.setPromptText("Enter Password");
        passwordField.setStyle("-fx-border-color: #790092; -fx-border-radius: 10; -fx-background-radius: 10;");
        passwordField.setMinWidth(250);
        passwordField.setMinHeight(40);

        Button loginButton = new Button();
        loginButton.setText("Login");
        loginButton.setStyle(
                "-fx-font-size: 18px; -fx-font-weight: bold; -fx-text-fill: WHITE; -fx-background-color: #790092; -fx-background-radius: 7");
        loginButton.setMinSize(150, 40);

        Label forgotLabel = new Label();
        forgotLabel.setText("Forgot your Password?");
        setLabelUI(forgotLabel);

        Label signup = new Label();
        signup.setText("Don't have an account?");
        setLabelUI(signup);

        Button signupButton = new Button();
        signupButton.setText("Sign Up");
        signupButton.setStyle(
                "-fx-font-size: 18px; -fx-font-weight: bold; -fx-text-fill: WHITE; -fx-background-color: #790092; -fx-background-radius: 7");
        signupButton.setMinSize(150, 40);

        HBox h1 = new HBox(10);
        HBox h2 = new HBox(10);
        HBox h3 = new HBox(10);
        HBox h4 = new HBox(10);
        HBox h5 = new HBox(10);

        h1.setAlignment(Pos.CENTER);
        h2.setAlignment(Pos.CENTER);
        h3.setAlignment(Pos.CENTER);
        h4.setAlignment(Pos.CENTER);
        h5.setAlignment(Pos.CENTER);

        h1.getChildren().addAll(username, usernameField);
        h2.getChildren().addAll(password, passwordField);
        h3.getChildren().add(loginButton);
        h4.getChildren().add(forgotLabel);
        h5.getChildren().addAll(signup, signupButton);

        loginButton.setOnAction(event -> {

            String usr = usernameField.getText();
            String pwd = passwordField.getText();

            Login login = new Login(usr, pwd);
            if (login.checkLoginCredentials()) {

                HomePlayListScreen.display(usr);
                primaryStage.close();
            } else {

                Alert alert = new Alert(AlertType.INFORMATION);
                alert.setHeaderText("User Not Found");
                alert.showAndWait();
            }
        });
        signupButton.setOnAction(event -> {

            SignUp sign = new SignUp();
            sign.OpenNewWindow(primaryStage);
            primaryStage.close();
        });

        VBox vbox = new VBox(30);
        vbox.setPadding(new Insets(350, 10, 10, 800));
        vbox.getChildren().addAll(h1, h2, h3, h4, h5);

        root.getChildren().add(imageView);
        root.getChildren().add(logoView);
        root.getChildren().addAll(vbox);

        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
