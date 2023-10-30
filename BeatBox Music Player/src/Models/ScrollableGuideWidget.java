package Models;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.HBox;

public class ScrollableGuideWidget {

    static ScrollPane scrollPane;

    public static ScrollPane display() {

        ObservableList<Guide> cardData = FXCollections.observableArrayList(
                new Guide(new Image("https://static.toiimg.com/thumb/msid-91352401,width-1280,resizemode-4/91352401.jpg"), new Label("Arjit Singh")),
                new Guide(new Image("https://upload.wikimedia.org/wikipedia/commons/thumb/b/bd/Shreya_Ghoshal_at_Filmfare_Awards_South.jpg/220px-Shreya_Ghoshal_at_Filmfare_Awards_South.jpg"), new Label("Shreya Goshal")),
                new Guide(new Image("https://m.timesofindia.com/photo/81550412/81550412.jpg"), new Label("Ajay-Atul")),
                new Guide(new Image("https://cdns-images.dzcdn.net/images/artist/e118eeb5332fe76610d4b355fdb61b03/500x500.jpg"), new Label("K.K")),
                new Guide(new Image("https://st1.bollywoodlife.com/wp-content/uploads/2017/04/sonu-nigam-041013.jpg"), new Label("Sonu Nigam")),
                new Guide(new Image("https://images.news18.com/ibnkhabar/uploads/2022/01/Lata-Mangeshkar-5.jpg"), new Label("Lata Mangeshkar")),
                new Guide(new Image("https://akm-img-a-in.tosshub.com/businesstoday/images/story/202305/rehman-sixteen_nine.jpg?size=948:533"), new Label("A.R.Rehman"))
            );

        ListView<Guide> listView = new ListView<>(cardData);
        listView.setCellFactory(param -> new CardCell());

        
        scrollPane = new ScrollPane(listView);
        scrollPane.setMaxWidth(400);
        scrollPane.setMinHeight(450);
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
                cardLayout.getChildren().add(item.getTitle());
                cardLayout.getChildren().add(item.getContent());
                setGraphic(cardLayout);
            } else {
                setGraphic(null);
            }
        }
    }

