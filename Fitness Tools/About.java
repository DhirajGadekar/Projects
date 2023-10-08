
import javafx.geometry.Insets;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class About {

    void openNewWindow(Stage primaryStage) {
        Stage newStage = new Stage();
        newStage.setTitle("About");
        newStage.setResizable(false);
        newStage.getIcons().add(new Image("Image/logoImage.png"));

        Group root = new Group();
        Scene scene = new Scene(root, 800, 600, Color.BLACK);

        Button backButton = new Button("<- Back");
        backButton.setBackground(new Background(new BackgroundFill(Color.LIGHTGRAY, null, null)));
        backButton.setMinSize(100, 40);
        backButton.setMaxSize(100, 40);
        backButton.setStyle("-fx-font-weight: bold; -fx-background-radius: 100px;");

        Image image = new Image("Image/ourteamformal.jpg");
        ImageView imageView = new ImageView(image);
        imageView.setFitWidth(1000);
        imageView.setFitHeight(1000);
        imageView.setPreserveRatio(true);
        imageView.setX(-90);

        VBox vbox1 = new VBox(10);
        vbox1.getChildren().addAll(backButton);
        vbox1.setPadding(new Insets(10, 10, 10, 10));

        root.getChildren().addAll(imageView, vbox1);

        backButton.setOnAction(event -> {

            primaryStage.show();
            newStage.close();
        });

        newStage.setScene(scene);
        newStage.show();
    }
}