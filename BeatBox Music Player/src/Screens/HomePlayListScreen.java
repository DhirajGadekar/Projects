package Screens;

import Models.PlayListWidget;
import Widgets.GridView;
import Widgets.SearchSong;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ScrollPane;
import javafx.scene.control.TextField;
import javafx.scene.effect.DropShadow;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

class Card extends StackPane {

    public Card(double width, double height, double elevation) {
        Rectangle card = new Rectangle(width, height);
        card.setFill(Color.web("#9f56e9"));

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

public class HomePlayListScreen {

    static Button lastClickedButton;
    static HBox container = new HBox();
    static HBox arr[] = new HBox[4];
    static PlayListWidget oldSelectedSong;

    static Stage window;

    public static void display(String usr) {

        Stage primaryStage = new Stage();
        primaryStage.getIcons().add(new Image("Images/BeatBox_logo.png"));
        window = primaryStage;
        primaryStage.setTitle("BeatBox");

        arr[0] = new HBox();
        arr[1] = new HBox();
        arr[2] = new HBox();
        arr[3] = new HBox();

        arr[0].getChildren().add(GridView.display());
        ScrollPane content = new ScrollPane(NewRelasesAndSavedPlayList.display());
        content.setMinWidth(1400);
        content.setMaxHeight(640);
        arr[1].getChildren().add(content);
        arr[2].getChildren().add(FavoriteListWidget.display());
        arr[3].getChildren().add(ProfileWidget.display(usr));

        // For Top View
        Rectangle roundedRectangle1 = new Rectangle(1400, 100);
        roundedRectangle1.setFill(Color.web("#9f56e9"));

        Label text = new Label("Hello,\n" + usr);
        text.setStyle("-fx-font-size: 45px;-fx-font-weight: bold;-fx-text-fill: white;");
        text.setPadding(new Insets(30, 1100, 0, 30));

        Card roundedRectangle2 = new Card(1400, 200, 10);

        // roundedRectangle.setWidth(primaryStage.getWidth());
        // roundedRectangle.setHeight(primaryStage.getHeight() * 0.30);

        TextField searchTextField = new TextField();
        searchTextField.setStyle(
                "-fx-font-weight: bold;-fx-border-color: white;-fx-font-size: 20px; -fx-border-radius: 25px;-fx-background-color:transperent;");
        searchTextField.setPromptText("Search");
        searchTextField.setMaxSize(280, 40);

        StackPane stackPaneTextField = new StackPane(searchTextField);
        stackPaneTextField.setPadding(new Insets(10, 0, 0, 0));

        Image image = new Image("Images/search.png");
        ImageView imageView = new ImageView(image);
        imageView.setFitWidth(40);
        imageView.setFitHeight(40);
        Rectangle clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        // clip.setArcWidth(90);
        // clip.setArcHeight(90);
        imageView.setClip(clip);
        StackPane stackPaneForSearchImage = new StackPane();
        stackPaneForSearchImage.getChildren().add(imageView);

        stackPaneForSearchImage.setOnMouseClicked(e -> {

            SearchSong.search(searchTextField.getText().toLowerCase(), usr);
        });

        HBox stackPaneForSearch = new HBox(10);
        stackPaneForSearch.getChildren().addAll(stackPaneTextField, stackPaneForSearchImage);
        stackPaneForSearch.setPadding(new Insets(0, 0, 0, 1000));

        StackPane stackPane1 = new StackPane();
        stackPane1.getChildren().addAll(roundedRectangle1);
        stackPane1.setAlignment(Pos.TOP_CENTER);

        StackPane stackPane2 = new StackPane();
        stackPane2.getChildren().addAll(roundedRectangle2, text, stackPaneForSearch);

        StackPane stackPane3 = new StackPane();
        stackPane3.getChildren().addAll(stackPane1, stackPane2);

        // middle Hbox container
        container.getChildren().add(arr[0]);
        // For Bottom View
        Rectangle roundedRectangle3 = new Rectangle(1400, 50);
        roundedRectangle3.setFill(Color.web("#9f56e9"));

        Card roundedRectangle4 = new Card(1400, 100, 10);

        Button homeIcon = new Button("🏠");
        homeIcon.setStyle(
                "-fx-font-size: 45px;-fx-font-weight: bold;-fx-text-fill: white;-fx-background-color: #9f56e9");
        lastClickedButton = homeIcon;
        homeIcon.setOnMouseClicked(e -> {
            handleLabelClick(homeIcon);
            container.getChildren().clear();
            container.getChildren().add(arr[0]);
        });

        Button Icon1 = new Button("🎶");
        Icon1.setStyle("-fx-font-size: 45px;-fx-font-weight: bold;-fx-text-fill: white;-fx-background-color: #9f56e9");
        Icon1.setOnAction(e -> {
            handleLabelClick(Icon1);
            container.getChildren().clear();
            container.getChildren().add(arr[1]);
        });

        Button Icon2 = new Button("❄");
        Icon2.setStyle("-fx-font-size: 45px;-fx-font-weight: bold;-fx-text-fill: white;-fx-background-color: #9f56e9");
        Icon2.setOnAction(e -> {
            handleLabelClick(Icon2);
            container.getChildren().clear();
            container.getChildren().add(arr[2]);
        });

        Button Icon3 = new Button("👤");
        Icon3.setStyle("-fx-font-size: 45px;-fx-font-weight: bold;-fx-text-fill: white;-fx-background-color: #9f56e9");
        Icon3.setOnAction(e -> {
            handleLabelClick(Icon3);
            container.getChildren().clear();
            container.getChildren().add(arr[3]);
        });

        HBox hBox = new HBox(300);
        hBox.getChildren().addAll(homeIcon, Icon1, Icon2, Icon3);
        hBox.setAlignment(Pos.CENTER);

        StackPane stackPane4 = new StackPane();
        stackPane4.getChildren().addAll(roundedRectangle3);
        stackPane4.setAlignment(Pos.BOTTOM_CENTER);

        StackPane stackPane5 = new StackPane();
        stackPane5.getChildren().addAll(roundedRectangle4, hBox);

        StackPane stackPane6 = new StackPane();
        stackPane6.getChildren().addAll(stackPane4, stackPane5);

        VBox containerBox = new VBox(30);
        containerBox.getChildren().addAll(stackPane3, container, stackPane6);

        Pane pane = new Pane();
        pane.getChildren().add(containerBox);

        Scene scene = new Scene(pane, 1400, 1000);
        scene.getStylesheets().add("/ThemeProvider.css");

        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private static void handleLabelClick(Button icon1) {

        if (lastClickedButton != null) {
            lastClickedButton.setStyle(
                    " -fx-font-size: 45px; -fx-font-weight: bold; -fx-text-fill: white; -fx-background-color: #9f56e9;");
        }
        icon1.setStyle(
                " -fx-font-size: 45px; -fx-font-weight: bold; -fx-text-fill: #131345;-fx-background-color: #9f56e9");
        lastClickedButton = icon1;
    }

    public static Stage getWindow() {
        return window;
    }

    // public static void main(String[] args) {
    // launch(args);
    // }
}