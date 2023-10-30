// package Screens;

// import javafx.geometry.Insets;
// import javafx.geometry.Pos;
// import javafx.scene.Scene;
// import javafx.scene.control.Button;
// import javafx.scene.control.Label;
// import javafx.scene.layout.VBox;
// import javafx.stage.Stage;

// public class Categories {

//     static Stage windoStage;
//     static Scene primScene;

//     public static void setButtonProp(Button button) {
//         //Font font = Font.font("Arial", 24);

//         button.setMinSize(400, 50); 
//        button.setAlignment(Pos.BASELINE_CENTER);
//         button.setStyle(
//                 "-fx-font-weight: bold; -fx-border-color: BLACK;-fx-font-size: 24px; -fx-border-radius: 15px; -fx-background-color:transperent");
//     }

//     public static void display(Stage categoriesStage,Scene scene) {

//         windoStage = categoriesStage;
//         primScene = scene;

//         VBox root = new VBox();
//         scene = new Scene(root, 1300, 1000);

//         Label label = new Label();
//         label.setText("So, what brings you here?");
//         label.setStyle("-fx-font-weight: bold;-fx-font-size: 30px;");
//         label.setPadding(new Insets(300, 0, 0, 450));
//         label.setAlignment(Pos.CENTER);

//         Button relationships = new Button("Realtionships");
//         setButtonProp(relationships);
//         Button emotionalWellBeing = new Button("Emotional Well-Being");
//         setButtonProp(emotionalWellBeing);
//         Button success = new Button("Success");
//         setButtonProp(success);
//         Button personalGrowth = new Button("Personal Growth");
//         setButtonProp(personalGrowth);
//         Button worklife = new Button("Work-Life Balance");
//         setButtonProp(worklife);
//         Button betterHealth = new Button("Better Health");
//         setButtonProp(betterHealth);

//         VBox vbox = new VBox(20);
//         vbox.setPadding(new Insets(30, 10, 10, 450));
//         vbox.getChildren().addAll(relationships, emotionalWellBeing, success, personalGrowth, worklife, betterHealth);
    
//         root.getChildren().addAll(label,vbox);
//         categoriesStage.setScene(scene);
//         categoriesStage.show();
//     }
// }

