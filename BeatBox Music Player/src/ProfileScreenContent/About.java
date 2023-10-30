package ProfileScreenContent;

import javafx.geometry.Insets;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.VBox;

public class About {

    static VBox container;

    public static VBox display() {

        container = new VBox(10);
        Image img = new Image("Images/aboutPage.jpg");
        ImageView imageView = new ImageView(img);
        imageView.setFitHeight(550);
        imageView.setFitWidth(900);
        imageView.setPreserveRatio(false);

        container.setPadding(new Insets(50, 0, 0, 0));
        container.getChildren().add(imageView);
        return container;
    }
}
