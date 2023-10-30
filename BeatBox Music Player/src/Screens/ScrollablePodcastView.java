package Screens;

import Models.Podcast;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.StackPane;

public class ScrollablePodcastView {
   static ScrollPane scrollPane;

    public static ScrollPane display() {
        ObservableList<Podcast> cardData = FXCollections.observableArrayList(
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Bappa")),
            new Podcast(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQnUykOEnXa1MyAM5Qz5qKUURhoqpNWOvGO6A&usqp=CAU"), new Label("Mann Le")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Ye tune kya kiya")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Swami Mukundananad")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Bappa")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Teri Mitti")), 
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Aasman Ko Chhukar")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Hanuman Chalisa")),
            new Podcast(new Image("/Images/C2w.jpg"), new Label("Deva Shree Ganesha"))       
        );

        ListView<Podcast> listView = new ListView<>(cardData);
        listView.setCellFactory(param -> new CardCell());

        scrollPane = new ScrollPane(listView);
        scrollPane.setMaxWidth(400);
        scrollPane.setMinHeight(450);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);

        return scrollPane;
    }
}

class CardCell extends ListCell<Podcast> {
    @Override
    protected void updateItem(Podcast item, boolean empty) {
        super.updateItem(item, empty);

        if (item != null && !empty) {
            StackPane cardLayout = new StackPane();
            cardLayout.getChildren().add(item.getTitle());
            cardLayout.getChildren().add(item.getContent());
            setGraphic(cardLayout);
        } else {
            setGraphic(null);
        }
    }
}
