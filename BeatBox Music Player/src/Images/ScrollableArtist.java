package Images;

import Models.Guide;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.HBox;

public class ScrollableArtist {

    static ScrollPane scrollPane;

    public static ScrollPane display() {

        ObservableList<Guide> cardData = FXCollections.observableArrayList(
            new Guide(new Image("/Images/C2w.jpg"), new Label("Arjit Singh")),
            new Guide(new Image("https://pbs.twimg.com/profile_images/1478214761267433472/fvAXubep_400x400.jpg"), new Label("Shreya Goshal")),
                new Guide(new Image("/Images/C2w.jpg"), new Label("Ajay-Atul")),
                new Guide(new Image("/Images/C2w.jpg"), new Label("K.K.")),
                new Guide(new Image("/Images/C2w.jpg"), new Label("Sonu Nigam"))
        );

        ListView<Guide> listView = new ListView<>(cardData);
        listView.setCellFactory(param -> new CardCell());
        
        listView.setPrefSize(600, 500); // Set the preferred width and height of the ListView

        
        scrollPane = new ScrollPane(listView);
        scrollPane.setMinHeight(500);
        scrollPane.setMaxWidth(700);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);

        return scrollPane;
        
    }
}
class CardCell extends ListCell<Guide> {
        @Override
        protected void updateItem(Guide item, boolean empty) {
            super.updateItem(item, empty);

            if (item != null && !empty) {
                // Create a custom card layout (e.g., HBox)
                HBox cardLayout = new HBox(30);
                cardLayout.getChildren().add(item.getCircularImage());
                cardLayout.getChildren().add(item.getContent());
                setGraphic(cardLayout);
            } else {
                setGraphic(null);
            }
        }
    }

