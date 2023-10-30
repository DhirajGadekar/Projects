package ProfileScreenContent;

import Screens.HomePlayListScreen;
import Screens.ProfileWidget;
import javafx.geometry.Insets;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.FileChooser;
import java.io.File;

public class EditProfileWidget{

    static VBox vContainer = new VBox(20);
    static Image image;
    
    public static VBox display(){

        Label pageLabel = new Label("Edit Profile ▶");
        pageLabel.setStyle("-fx-font-weight: bold;-fx-font-size: 30px; -fx-font-weight: bold;");
      
        Label userNameLabel = new Label("Change Username");
        userNameLabel.setStyle("-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold;");
        TextField userNameTextField = new TextField();
        userNameTextField.setStyle("-fx-font-weight: bold;-fx-border-color: BLACK;-fx-font-size: 24px; -fx-border-radius: 15px;-fx-background-color:transperent;");
        userNameTextField.setText(ProfileWidget.getUserName());

        Label imageLabel = new Label("Change Profile Image ");
        imageLabel.setStyle("-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold;");
        TextField imagTextField = new TextField();
        imagTextField.setStyle("-fx-border-color: BLACK;-fx-font-size: 20px; -fx-border-radius: 15px;-fx-background-color:transperent;");
        
         
        FileChooser fileChooser = new FileChooser();
        fileChooser.getExtensionFilters().add(new FileChooser.ExtensionFilter("Image Files", "*.jpg", "*.png", "*.jpeg"));

        
        Label selectImage = new Label("Select Image");
        selectImage.setStyle("-fx-font-weight: bold;-fx-font-size: 20px; -fx-font-weight: bold;-fx-text-fill:#853fe7;");
        selectImage.setOnMouseClicked(e -> {
            File file = fileChooser.showOpenDialog(HomePlayListScreen.getWindow());
            if (file != null) {
                String str = file.toURI().toString();
                image = new Image(str);
                
                imagTextField.setText(str);
            }
        });

        HBox container = new HBox(15);
        container.getChildren().addAll(imagTextField,selectImage);

        Button saveButton = new Button("Save");
        saveButton.setOnAction(e->{
            ProfileWidget.setProfileImage(image);
            ProfileWidget.setUserName(userNameTextField.getText());
        });

        saveButton.setMinWidth(150);
        saveButton.setMaxHeight(20);
        saveButton.setStyle("-fx-font-size: 15px;-fx-font-weight: bold;-fx-text-fill: white;");
        saveButton.getStyleClass().add("rounded-button");

        vContainer.getChildren().addAll(pageLabel,userNameLabel,userNameTextField,imageLabel,container,saveButton);
        vContainer.setPadding(new Insets(60, 0, 0, 60));

        return vContainer;   
    }
}