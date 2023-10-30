package ProfileScreenContent;

import HoriScrollView.HoriScrollMyPlayList;
import Models.PlayListWidget;
import javafx.geometry.Insets;
import javafx.scene.Node;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.layout.VBox;

public class EditPlaylistWidget {
    static ScrollPane scrollPane;
    static PlayListWidget selectedItem;
    static VBox vContainer = new VBox(20);
    public static VBox display(){

        Label pageLabel = new Label("Select Song for remove ▶");
        pageLabel.setStyle("-fx-font-weight: bold;-fx-font-size: 30px;");


        scrollPane = HoriScrollMyPlayList.getMyPlayList();
		
		Node listNode4 = scrollPane.getContent();

        if(listNode4 instanceof ListView){
			
			ListView<?> listView4 = (ListView<?>) listNode4;
			listView4.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem = (PlayListWidget) newValue;

					if(selectedItem != null){
						HoriScrollMyPlayList.removeSongFromMyPlayList(selectedItem);
					}

					System.out.println("Selected recently playlist Song Name: " + selectedItem.getSongName());

					// if(oldValue != null){
					// 	System.out.println("Old Selected Song recently playlist:" + oldSelectedPlayListWidget4);
					// 	oldSelectedPlayListWidget4.stopMp3();
					// }

					// if(musicWindow != null ){
					// 	musicWindow.close();
					// }

					// musicWindow = MusicPlayerWidget.display(selectedItem4,false);

					// oldSelectedPlayListWidget4 = selectedItem4;
			    	// System.out.println("Clicked item in recently playList: " + selectedItem4.toString());
				}
			});
		}
        vContainer.getChildren().addAll(pageLabel,scrollPane);
        vContainer.setPadding(new Insets(60, 0, 0, 60));
        return vContainer;
    }
}
