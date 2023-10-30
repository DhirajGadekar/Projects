package Widgets;

import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.VBox;
import javafx.scene.text.Font;
import javafx.stage.Modality;
import javafx.stage.Stage;

public class AlertWindow {
    
    public static void display(){
        
        Stage window = new Stage();
        window.setTitle("Not Found");

        window.initModality(Modality.APPLICATION_MODAL);

        Label lable = new Label("❌ "+"Song Not Found");
        lable.setStyle("-fx-font-size: 30px;-fx-font-weight: bold;");
        
        Button okBtn = new Button("Ok");
        okBtn.setOnAction(e->{
            window.close();
        });
        okBtn.setMinWidth(200);
        okBtn.setStyle("-fx-font-size: 25px;-fx-font-weight: bold;-fx-text-fill: white;");
        okBtn.setFont(Font.font("Arial", 24));
        okBtn.getStyleClass().add("rounded-button");

        VBox layOutBox = new VBox(40);
        layOutBox.setAlignment(Pos.CENTER);
        layOutBox.getChildren().addAll(lable,okBtn);

        Scene scene = new Scene(layOutBox,600,150);

        scene.getStylesheets().add("/ThemeProvider.css");


        window.setScene(scene);
        window.show();
    }
}
