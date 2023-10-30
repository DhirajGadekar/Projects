package ProfileScreenContent;

import Images.ScrollableArtist;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.VBox;

public class ArtistWidget {
    static VBox vContainer = new VBox(20);
    static Image image;
    
    public static VBox display(){

        Label pageLabel = new Label("My Artists ▶");
        pageLabel.setStyle("-fx-font-weight: bold;-fx-font-size: 30px;");

        ScrollPane scrollPane = new ScrollPane(ScrollableArtist.display());

        vContainer.getChildren().addAll(pageLabel,scrollPane);
        vContainer.setPadding(new Insets(60, 0, 0, 60));
        return vContainer;
    }
}
