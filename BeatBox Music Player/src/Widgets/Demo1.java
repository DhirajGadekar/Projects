package Widgets;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;

//import javafx.scene.layout.Pane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class Demo1 extends Application {

    public static Button Home4;

    private static String words = "Shashi Bagal sir, our mentor, is nothing short of a genius.\n" +
            "He patiently resolved every doubt, dedicating extra time to\n" +
            "ensure our understanding.\n" +
            "Every lecture felt like a Eureka moment, and the \n" +
            "regular assignments challenged us "+" to tackle new problem \n" +
            "statements from various Angles.\n" +
            "And also Shashi sir provides invaluable career guidance,\n" +
            "paving the way for a promising future.\n";
    private static String teamName = 
            
            "1.Saurabh Wagh \n" +
            "2.Manasi Wagh \n" +
            "3.Sakshi Bhojane\n" + 
            "4.Viraj Dighe\n\n\n";

    // public static void main(String[] args) {
    //     launch(args);
    // }

     @Override
    public void start(Stage primaryStage) throws Exception {
        Scene scene = display();

        primaryStage.setScene(scene);
        primaryStage.setTitle("Trojan bits - About Us");
        primaryStage.show();
    }

    public static Scene display() {

        // Sir Image
        Image sirImage = new Image("/Images/C2w.jpg");  // sirchya pic chi image url mention kr
        ImageView imageView = new ImageView(sirImage);
        imageView.setImage(sirImage);
        imageView.setFitWidth(950);
        imageView.setFitHeight(800);
        Home4 = new Button("Home");
        
        //TeamContent
        Label titLabel = new Label("Trojan Bits");
        titLabel.setStyle("-fx-font-size: 35px; -fx-font-weight: bold; -fx-text-fill: #6214ff;");

        Label label = new Label(teamName);
        label.setStyle("-fx-font-size: 20px; -fx-font-weight: bold; -fx-text-fill: black;");

        //SirContext
        Label label2 = new Label("Our Mentor");
        label2.setStyle("-fx-font-size: 30px; -fx-font-weight: bold; -fx-text-fill: #6214ff;");

        Label contextLabel = new Label(words);
        contextLabel.setStyle("-fx-font-size: 20px; -fx-font-weight: bold; -fx-text-fill: black;");

        VBox memeberContainer = new VBox();
        memeberContainer.getChildren().addAll(Home4,titLabel, label);
        memeberContainer.setPadding(new Insets(70, 0, 0, 20));

        VBox sirContextContainer = new VBox(15);
        sirContextContainer.getChildren().addAll(memeberContainer, label2, contextLabel);
        sirContextContainer.setPadding(new Insets(30, 0, 0, 80));

        HBox containerForImage = new HBox(imageView);
        containerForImage.setPadding(new Insets(70, 0, 0, 300));
        HBox containerForBoth = new HBox(20);
        containerForBoth.getChildren().addAll(sirContextContainer, containerForImage);
        
        containerForBoth.setStyle("-fx-background-image: url('/Images/welcomeImage.jpg'); " +
               "-fx-background-size: cover; " +
               "-fx-alignment: CENTER;");
        Scene scene = new Scene(containerForBoth);

        return scene;
    }
}