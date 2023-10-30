package Widgets;

import HorizontallyScrollView.HorizontalScrollRecentlyPlayList;
import Models.Guide;
import Models.PlayListWidget;
import Models.ScrollableGuideWidget;
import Screens.ScrollablePodcastView;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.effect.DropShadow;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

class Card extends StackPane {
    public Card(double width, double height, double elevation) {
        Rectangle card = new Rectangle(width, height);
        card.setFill(Color.web("#ccb0e8"));
        card.setArcWidth(100);
        card.setArcHeight(100);

        DropShadow dropShadow = new DropShadow();
        dropShadow.setColor(Color.GRAY);
        dropShadow.setOffsetX(elevation);
        dropShadow.setOffsetY(elevation);
        card.setEffect(dropShadow);

        getChildren().add(card);
    }
}

public class GridView {
    static PlayListWidget selectedItem;
    static PlayListWidget oldSelectedPlayListWidget = new PlayListWidget();
    static Stage musicWindow;
    static Button btn = new Button();
    static HorizontalScrollRecentlyPlayList horizontalPlayList;
    static Guide selectedItem1;
    static ScrollPane scrollPane2 = ScrollabelPlayListWidget.getAjayAtulList(); // Correct the class name
    static Node listNode = scrollPane2.getContent();
    static HBox hBox;
    static StackPane stackPane1;
    static StackPane stackPane2;
    static StackPane stackPane3;
	static VBox container2 = new VBox(10);

    private static void changeScrollablePlaylist(ScrollPane scrollpaneObj) {
        scrollPane2 = scrollpaneObj;
        listNode = scrollPane2.getContent();

		 if (listNode instanceof ListView<?>) {
            ListView<?> listView = (ListView<?>) listNode;
            listView.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
                if (newValue != null) {
                    selectedItem = (PlayListWidget) newValue;

                    System.out.println("Selected Song Name: " + selectedItem.getSongName());

                    if (oldValue != null) {
                        oldSelectedPlayListWidget.changeButtonIcon();
                        oldSelectedPlayListWidget.stopMp3();
                    }

                    if (musicWindow != null) {
                        musicWindow.close();
                        oldSelectedPlayListWidget.changeButtonIcon();
                    }

                    forwordRecentlyPlayed();
                    musicWindow = MusicPlayerWidget.display(null, selectedItem, true);

                    selectedItem.changeButtonIcon();

                    oldSelectedPlayListWidget = selectedItem;
                    System.out.println("Clicked item: " + selectedItem.toString());
                }
            });
        }

        if (oldSelectedPlayListWidget != null) {
            btn = oldSelectedPlayListWidget.getIconButton();
            btn.setOnAction( e->{
				oldSelectedPlayListWidget.pauseMp3();
			});
        }

        Label textLabel2 = new Label("PlayList");
        textLabel2.setStyle("-fx-font-size: 40px;-fx-font-weight: bold;-fx-text-fill: white");
        textLabel2.setAlignment(Pos.BASELINE_CENTER);

        container2.setPadding(new Insets(20, 0, 0, 40));
		container2.getChildren().clear();
        container2.getChildren().addAll(textLabel2, scrollPane2);

    }

    public static HBox display() {
        // Card 1
        Card rect1 = new Card(420, 600, 10);
        rect1.setPadding(new Insets(0, 0, 0, 30));

        Label textLabel1 = new Label("Singer's");
        textLabel1.setStyle("-fx-font-size: 40px;-fx-font-weight: bold;-fx-text-fill: white");
        textLabel1.setAlignment(Pos.BASELINE_CENTER);

        ScrollPane scrollPane1 = ScrollableGuideWidget.display();

        Node listNode1 = scrollPane1.getContent();

        if (listNode1 instanceof ListView<?>) {
            ListView<?> listView1 = (ListView<?>) listNode1;
            listView1.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
                if (newValue != null) {
                    selectedItem1 = (Guide) newValue;
                    System.out.println("Selected Artist : " + selectedItem1.getContent().getText());
                    System.out.println("Clicked item: " + selectedItem1.toString());

                    switch (selectedItem1.getContent().getText()) {
                        case "Arjit Singh":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getArjitList());
                            break;
                        case "Shreya Goshal":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getShreyaList());
                            break;
                        case "Ajay-Atul":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getAjayAtulList());
                            break;
                        case "Sonu Nigam":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getSonuNigamList());
                            break;
                        case "K.K":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getKKList());
                            break;
						case "Lata Mangeshkar":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getLataDidiList());
                            break;
						case "A.R.Rehman":
                            changeScrollablePlaylist(ScrollabelPlayListWidget.getArRehmanList());
                            break;
						default:{
                              System.out.println("selected Invalid Singer Name");
						}
						break;
                    }
                }
            });
        }

        VBox container1 = new VBox(10);
        container1.setPadding(new Insets(20, 0, 0, 40));
        container1.getChildren().addAll(textLabel1, scrollPane1);

        stackPane1 = new StackPane();
        stackPane1.getChildren().addAll(rect1, container1);

        // Card 2
        Card rect2 = new Card(420, 600, 10);
        rect2.setPadding(new Insets(0, 0, 0, 30));

		scrollPane2 = ScrollabelPlayListWidget.getArjitList();
		listNode = scrollPane2.getContent();

          if (listNode instanceof ListView<?>) {
            ListView<?> listView = (ListView<?>) listNode;
            listView.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
                if (newValue != null) {
                    selectedItem = (PlayListWidget) newValue;

                    System.out.println("Selected Song Name: " + selectedItem.getSongName());

                    if (oldValue != null) {
                        oldSelectedPlayListWidget.changeButtonIcon();
                        oldSelectedPlayListWidget.stopMp3();
                    }

                    if (musicWindow != null) {
                        musicWindow.close();
                        oldSelectedPlayListWidget.changeButtonIcon();
                    }

                    forwordRecentlyPlayed();
                    musicWindow = MusicPlayerWidget.display(null, selectedItem, true);

                    selectedItem.changeButtonIcon();

                    oldSelectedPlayListWidget = selectedItem;
                    System.out.println("Clicked item: " + selectedItem.toString());
                }
            });
        }

        if (oldSelectedPlayListWidget != null) {
            btn = oldSelectedPlayListWidget.getIconButton();
            btn.setOnAction( e->{
				oldSelectedPlayListWidget.pauseMp3();
			});
        }

		Label textLabel2 = new Label("PlayList");
        textLabel2.setStyle("-fx-font-size: 40px;-fx-font-weight: bold;-fx-text-fill: white");
        textLabel2.setAlignment(Pos.BASELINE_CENTER);

		container2.getChildren().addAll(textLabel2,scrollPane2);
        container2.setPadding(new Insets(20, 0, 0, 40));

        stackPane2 = new StackPane();
        stackPane2.getChildren().addAll(rect2, container2);

        // Card 3
        Card rect3 = new Card(420, 600, 10);
        rect3.setPadding(new Insets(0, 0, 0, 30));

        Label textLabel3 = new Label("Podcast");
        textLabel3.setStyle("-fx-font-size: 40px;-fx-font-weight: bold;-fx-text-fill: white");
        textLabel3.setAlignment(Pos.BASELINE_CENTER);

        ScrollPane scrollPane3 = ScrollablePodcastView.display();

        VBox container3 = new VBox(10);
        container3.setPadding(new Insets(20, 0, 0, 40));
        container3.getChildren().addAll(textLabel3, scrollPane3);

        stackPane3 = new StackPane();
        stackPane3.getChildren().addAll(rect3, container3);

        hBox = new HBox(10);
        hBox.setPadding(new Insets(20, 0, 20, 0));
        hBox.getChildren().addAll(stackPane1, stackPane2, stackPane3);
        return hBox;
    }

	private static void forwordRecentlyPlayed() {

		horizontalPlayList = new HorizontalScrollRecentlyPlayList();
		if(selectedItem != null){
			horizontalPlayList.addRecentlyPlayedSong(selectedItem);
		}
	}
}
