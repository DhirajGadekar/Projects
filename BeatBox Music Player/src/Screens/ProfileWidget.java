package Screens;

import ProfileScreenContent.About;
import ProfileScreenContent.ArtistWidget;
import ProfileScreenContent.EditPlaylistWidget;
import ProfileScreenContent.EditProfileWidget;
import javafx.geometry.Insets;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;

public class ProfileWidget {

  static HBox container = new HBox(20);

  static Rectangle clip;

  static String username;

  static Button oldSelectedButton;

  static Image profileImage;
  static ImageView imageView;
  static Label userName;

  static VBox arr[] = new VBox[6];

  static VBox movableContainer = new VBox();

  public static HBox display(String usr) {

    arr[0] = EditProfileWidget.display();
    arr[1] = ArtistWidget.display();
    arr[2] = EditPlaylistWidget.display();
    arr[3] = About.display();
    // arr[4] = EditProfileWidget.display();

    // Main Label
    Label profileLable = new Label("My Profile ▶");
    profileLable.setStyle("-fx-font-size: 30px;-fx-font-weight: bold;");

    // Profile Image
    profileImage = new Image("https://www.wintechpratama.com/images/profile.jpg");
    Circle circle = new Circle(90);
    circle.setFill(Color.web("#9f56e9"));
    imageView = new ImageView(profileImage);
    imageView.setFitWidth(150);
    imageView.setFitHeight(150);
    clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
    clip.setArcWidth(150);
    clip.setArcHeight(150);
    imageView.setClip(clip);

    StackPane stackPane = new StackPane();
    stackPane.getChildren().addAll(circle, imageView);

    // ----------
    VBox vContainerForProIma_Label = new VBox(10);
    vContainerForProIma_Label.getChildren().addAll(profileLable, stackPane);

    // NameLabel
    userName = new Label(usr);
    userName.setStyle("-fx-font-size: 25px;-fx-font-weight: bold;");

    // Edit Button
    Button editBtn = new Button("Edit Profile 🔧");
    editBtn.setMinWidth(150);
    editBtn.setStyle("-fx-font-size: 15px;-fx-font-weight: bold;-fx-text-fill: white;");
    editBtn.getStyleClass().add("rounded-button");
    editBtn.setOnAction(e -> {
      movableContainer.getChildren().clear();
      movableContainer.getChildren().add(arr[0]);
    });
    // ---------------------------
    VBox vConatinerForEditLabel = new VBox(10);
    vConatinerForEditLabel.getChildren().addAll(userName, editBtn);
    vConatinerForEditLabel.setPadding(new Insets(120, 0, 0, 0));

    HBox hContainer = new HBox(20);
    hContainer.getChildren().addAll(vContainerForProIma_Label, vConatinerForEditLabel);

    Label ListLable = new Label("My Music ▶");
    ListLable.setStyle("-fx-font-size: 30px;-fx-font-weight: bold;");

    Rectangle flatLine = new Rectangle(350, 3);
    flatLine.setFill(Color.BLACK);

    Button editPlayListBtn = new Button("⚙ Edit PlayList                                ▶");
    editPlayListBtn.setStyle(
        "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    editPlayListBtn.setOnAction(e -> {
      changeBtnTheme(editPlayListBtn, 2);
      movableContainer.getChildren().clear();
      movableContainer.getChildren().add(arr[2]);
    });
    Rectangle flatLine1 = new Rectangle(350, 3);
    flatLine1.setFill(Color.BLACK);

    Button ArtistBtn = new Button("🧑‍🎨 Artist                                         ▶");
    ArtistBtn.setStyle(
        "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    ArtistBtn.setOnAction(e -> {
      changeBtnTheme(ArtistBtn, 1);
      movableContainer.getChildren().clear();
      movableContainer.getChildren().add(arr[1]);
    });
    // oldSelectedButton = ArtistBtn;
    Rectangle flatLine2 = new Rectangle(350, 3);
    flatLine2.setFill(Color.BLACK);

    Button recentlyBtn = new Button("🎵 Recently Played                         ▶");
    recentlyBtn.setStyle(
        "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    recentlyBtn.setOnAction(e -> {
      changeBtnTheme(recentlyBtn, 3);
    });
    Rectangle flatLine3 = new Rectangle(350, 3);
    flatLine3.setFill(Color.BLACK);

    Button aboutBtn = new Button("🙋🏼 About                                        ▶");
    aboutBtn.setStyle(
        "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    aboutBtn.setOnAction(e -> {
      changeBtnTheme(aboutBtn, 4);
      movableContainer.getChildren().clear();
      movableContainer.getChildren().add(arr[3]);
    });
    Rectangle flatLine4 = new Rectangle(350, 3);
    flatLine4.setFill(Color.BLACK);

    Button logOutBtn = new Button("↩ Log Out                                       ▶");
    logOutBtn.setStyle(
        "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    logOutBtn.setOnAction(e -> {
      changeBtnTheme(logOutBtn, 5);
    });
    Rectangle flatLine5 = new Rectangle(350, 3);
    flatLine5.setFill(Color.BLACK);

    VBox allContainer = new VBox(10);
    allContainer.getChildren().addAll(hContainer, ListLable, flatLine1, ArtistBtn, flatLine, editPlayListBtn, flatLine2,
        recentlyBtn, flatLine3, aboutBtn, flatLine4, logOutBtn, flatLine5);
    allContainer.setPadding(new Insets(0, 0, 0, 30));

    Rectangle verticalLine = new Rectangle(2, 640);
    verticalLine.setFill(Color.BLACK);
    container.getChildren().addAll(allContainer, verticalLine, movableContainer);
    container.setPadding(new Insets(0, 0, 0, 20));

    return container;
  }

  public static void changeBtnTheme(Button selcetedButton, int num) {
    if (oldSelectedButton != null) {
      oldSelectedButton.setStyle(
          "-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");
    }
    selcetedButton.setStyle(
        "-fx-text-fill: #9f56e9;-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold; -fx-background-color:transperent;");

    oldSelectedButton = selcetedButton;
  }

  public static String getUserName() {

    return username;
  }

  public static void setUserName(String username) {
    userName.setText(username);
  }

  public static void setProfileImage(Image image) {
    imageView.setImage(image);
  }
}
