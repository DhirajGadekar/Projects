package HorizontalScroll;

import Models.PlayListWidget;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.VBox;

public class HorizontalScrollablePlayList {

    static ScrollPane scrollPane;
    static ListView<PlayListWidget> listView;
    static ObservableList<PlayListWidget> newRelaseListData = FXCollections.observableArrayList(
        new PlayListWidget(new Image("/Images/WhatsApp Image 2023-10-28 at 1.32.29 PM.jpeg"), new Label("heeriye"),"https://pagalfree.com/musics/128-Heeriye%20(feat.%20Arijit%20Singh)%20-%20Dulquer%20Salmaan%20128%20Kbps.mp3"), 
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Tere%20Vaaste%20-%20Zara%20Hatke%20Zara%20Bachke%20128%20Kbps.jpg"), new Label("Tere vaasate"),"https://pagalfree.com/musics/128-Tere%20Vaaste%20-%20Zara%20Hatke%20Zara%20Bachke%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Leke%20Prabhu%20Ka%20Naam%20-%20Tiger%203%20128%20Kbps.jpg"), new Label("Leke Prabhu Ka Naam"),"https://pagalfree.com/musics/128-Leke%20Prabhu%20Ka%20Naam%20-%20Tiger%203%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Phir%20Aur%20Kya%20Chahiye%20-%20Arijit%20Singh%20128%20Kbps.jpg"), new Label("Phir Aur Kya Chahiye"),"https://pagalfree.com/musics/128-Phir%20Aur%20Kya%20Chahiye%20-%20Arijit%20Singh%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128What%20Jhumka%20-%20Rocky%20Aur%20Rani%20Kii%20Prem%20Kahaani%20128%20Kbps.jpg"), new Label("What Jhumka"),"https://pagalfree.com/musics/128-What%20Jhumka%20-%20Rocky%20Aur%20Rani%20Kii%20Prem%20Kahaani%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Dil%20Ka%20Telephone%202.0%20-%20Dream%20Girl%202%20128%20Kbps.jpg"), new Label("Dil Ka telephone"),"https://pagalfree.com/musics/128-Dil%20Ka%20Telephone%202.0%20-%20Dream%20Girl%202%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Jhoome%20Jo%20Pathaan%20-%20Pathaan%20128%20Kbps.jpg"), new Label("Jhume Jo Pathaan"),"https://pagalfree.com/musics/128-Jhoome%20Jo%20Pathaan%20-%20Pathaan%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Main%20Nikla%20Gaddi%20Leke%20-%20Gadar%202%20128%20Kbps.jpg"), new Label("Main Nikla Gaddi Leke"),"https://pagalfree.com/musics/128-Main%20Nikla%20Gaddi%20Leke%20-%20Gadar%202%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Sun%20Sajni%20-%20Satyaprem%20Ki%20Katha%20128%20Kbps.jpg"), new Label("Sun Sajni"),"https://pagalfree.com/musics/128-Sun%20Sajni%20-%20Satyaprem%20Ki%20Katha%20128%20Kbps.mp3")
    );
    public static ScrollPane getNewRelaseList(){
        
        listView = new ListView<>(newRelaseListData);
        listView.setCellFactory(param -> new CardCell());
        listView.setOrientation(javafx.geometry.Orientation.HORIZONTAL);

        scrollPane = new ScrollPane(listView);
        scrollPane.setMinWidth(1400);
        scrollPane.setMaxHeight(230);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);
        scrollPane.setHbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);
        scrollPane.setVbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);

        return scrollPane;
    }
}

class CardCell extends ListCell<PlayListWidget> {

    @Override
    protected void updateItem(PlayListWidget data,boolean empty){
    
        super.updateItem(data,empty);
        if(data != null && !empty){
            VBox cardLayout =  new VBox(10);
            cardLayout.getChildren().add(data.getMusicImageView());
            cardLayout.getChildren().add(data.getSongNameBox());
            setGraphic(cardLayout);
            cardLayout.setPadding(new Insets(10,0,10,0));
        }else{
            setGraphic(null);
        }
    }
}
