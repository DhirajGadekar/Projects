package VScrollSongList;

import Models.PlayListWidget;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.HBox;

public class MixGymSongList {
    
    static ScrollPane scrollPane = new ScrollPane();

    static ObservableList<PlayListWidget> GymSongs = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pbs.twimg.com/profile_images/1478214761267433472/fvAXubep_400x400.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3") 
    );

    static ObservableList<PlayListWidget> LofiSongList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3") ,
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pbs.twimg.com/profile_images/1478214761267433472/fvAXubep_400x400.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3")
        
    );

    static ObservableList<PlayListWidget> DevotionalSongs = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://sep.turbifycdn.com/ay/yhst-16794697616662/banjo-2016-indian-hindi-bollywood-movie-songs-cd-8.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
      new PlayListWidget(new
Image("https://i.pinimg.com/originals/17/21/68/1721687f42c048ec4c1a99fad73c5685.jpg"), new Label("Shiv Tandav"),"https://pagalfree.com/musics/128-Shiv%20Tandav%20-%20Manikarnika%20-%20The%20Queen%20Of%20Jhansi%20128%20Kbps.mp3"),
new PlayListWidget(new
Image("https://pagalfree.com/images/128Meri%20Maa%20Ke%20Barabar%20Koi%20Nahi%20-%20Jubin%20Nautiyal%20128%20Kbps.jpg"), new Label("Mere Maa Ke Barabar Koi Nahi"),"https://pagalfree.com/musics/128-Meri%20Maa%20Ke%20Barabar%20Koi%20Nahi%20-%20Jubin%20Nautiyal%20128%20Kbps.mp3"), 
new PlayListWidget(new
Image("https://pagalfree.com/images/128Namo%20Namo%20-%20Kedarnath%20128%20Kbps.jpg"), new Label("Namo Namo"),"https://pagalfree.com/musics/128-Namo%20Namo%20-%20Kedarnath%20128%20Kbps.mp3"), 
new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
new PlayListWidget(new Image("https://pagalfree.com/images/128Jaikal%20Mahakal%20-%20Goodbye%20128%20Kbps.jpg"), new Label("JaiKal Mahakal"),"https://pagalfree.com/musics/128-Jaikal%20Mahakal%20-%20Goodbye%20128%20Kbps.mp3"),
new PlayListWidget(new Image("https://pagalfree.com/images/128Aigiri%20Nandini%20-%20Prithviraj%20128%20Kbps.jpg"), new Label("Aigiri nandini"),"https://pagalfree.com/musics/128-Aigiri%20Nandini%20-%20Prithviraj%20128%20Kbps.mp3"),
new PlayListWidget(new Image("https://pagalfree.com/images/128Ram%20Siya%20Ram%20-%20Adipurush%20128%20Kbps.jpg"), new Label("Ram Siya Ram"),"https://pagalfree.com/musics/128-Ram%20Siya%20Ram%20-%20Adipurush%20128%20Kbps.mp3"),
new PlayListWidget(new Image("https://pagalfree.com/images/128Jai%20Shri%20Ram%20Full%20Song%20-%20Adipurush%20128%20Kbps.jpg"), new Label("Jay Shri Ram"),"https://pagalfree.com/musics/128-Jai%20Shri%20Ram%20Full%20Song%20-%20Adipurush%20128%20Kbps.mp3"),
 new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3") 

    );

    static ObservableList<PlayListWidget> loveSong = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Kesariya%20-%20Brahmastra%20128%20Kbps.jpg"), new Label("Kesariya"),"https://pagalfree.com/musics/128-Kesariya%20-%20Brahmastra%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Dil%20-%20Ek%20Villain%20Returns%20128%20Kbps.jpg"), new Label("Dil from Ek Villan Return"),"https://pagalfree.com/musics/128-Dil%20-%20Ek%20Villain%20Returns%20128%20Kbps.mp3"), 
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Shaamat%20-%20Ek%20Villain%20Returns%20128%20Kbps.jpg"), new Label("Shaamat from Ek Villan Returns"),"https://pagalfree.com/musics/128-Shaamat%20-%20Ek%20Villain%20Returns%20128%20Kbps.mp3"), 
	    new PlayListWidget(new Image("https://pagalfree.com/images/192Shayad%20-%20Love%20Aaj%20Kal%20192%20Kbps.jpg"), new Label("Shayad"),"https://pagalfree.com/musics/192-Shayad%20-%20Love%20Aaj%20Kal%20192%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Khairiyat%20-%20Chhichhore%20128%20Kbps.jpg"), new Label("Khairiyat"),"https://pagalfree.com/musics/128-Khairiyat%20-%20Chhichhore%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/128Dil%20Na%20Jaaneya%20(Unplugged)%20-%20Good%20Newwz%20128%20Kbps.jpg"), new Label("Dil Na Jaaneya"),"https://pagalfree.com/musics/128-Dil%20Na%20Jaaneya%20(Unplugged)%20-%20Good%20Newwz%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Kalank%20(Bonus%20Track)%20-%20Kalank%20128%20Kbps.jpg"), new Label("Kalank"),"https://pagalfree.com/musics/128-Kalank%20(Bonus%20Track)%20-%20Kalank%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Tu%20Hi%20Yaar%20Mera%20-%20Pati%20Patni%20Aur%20Woh%20128%20Kbps.jpg"), new Label("Tu hi hai yaar Mera"),"https://pagalfree.com/musics/128-Tu%20Hi%20Yaar%20Mera%20-%20Pati%20Patni%20Aur%20Woh%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Roke%20Na%20Ruke%20Naina-%20Badrinath%20Ki%20Dulhania%20128%20Kbps.jpg"), new Label("Roke Na Ruke Naina"),"https://pagalfree.com/musics/128-Roke%20Na%20Ruke%20Naina-%20Badrinath%20Ki%20Dulhania%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Soch%20Na%20Sake%20-%20Airlift%20128%20Kbps.jpg"), new Label("Soch Na Sake"),"https://pagalfree.com/musics/128-Soch%20Na%20Sake%20-%20Airlift%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Janam%20Janam%20-%20Dilwale%20128%20Kbps.jpg"), new Label("Janam Janam"),"https://pagalfree.com/musics/128-Janam%20Janam%20-%20Dilwale%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Baatein%20Ye%20Kabhi%20Na%20(Male)%20-%20Khamoshiyan%20128%20Kbps.jpg"), new Label("Baatein Ye Kabhi na"),"https://pagalfree.com/musics/128-Baatein%20Ye%20Kabhi%20Na%20(Male)%20-%20Khamoshiyan%20128%20Kbps.mp3")     
    );

    static ObservableList<PlayListWidget> MashUpsSong = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3") ,
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pbs.twimg.com/profile_images/1478214761267433472/fvAXubep_400x400.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3")
        
    );

    
    static ObservableList<PlayListWidget> chillOutList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Saiyaan%20Ji%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.jpg"), new Label("Saiyaan Ji"),"https://pagalfree.com/musics/128-Saiyaan%20Ji%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Loca%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.jpg"), new Label("loca"),"https://pagalfree.com/musics/128-Loca%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128First%20Kiss%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.jpg"), new Label("first kiss"),"https://pagalfree.com/musics/128-First%20Kiss%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Love%20Dose%20-%20Desi%20Kalakaar%20128%20Kbps.jpg"), new Label("Love Dose"),"https://pagalfree.com/musics/128-Love%20Dose%20-%20Desi%20Kalakaar%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Brown%20Rang%20-%20International%20Villager%20128%20Kbps.jpg"), new Label("Brown rang"),"https://pagalfree.com/musics/128-Brown%20Rang%20-%20International%20Villager%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/192Care%20Ni%20Karda%20-%20Chhalaang%20192%20Kbps.jpg"), new Label("Care Ni Karda"),"https://pagalfree.com/musics/192-Care%20Ni%20Karda%20-%20Chhalaang%20192%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Manali%20Trance%20-%20The%20Shaukeens%20128%20Kbps.jpg"), new Label("Manali trance"),"https://pagalfree.com/musics/128-Manali%20Trance%20-%20The%20Shaukeens%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Kuley%20Kuley%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.jpg"), new Label("Kuley Kuley"),"https://pagalfree.com/musics/128-Kuley%20Kuley%20-%20Yo%20Yo%20Honey%20Singh%20128%20Kbps.mp3")
    );
    static ObservableList<PlayListWidget> SadSongs = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Baatein%20Ye%20Kabhi%20Na%20(Female)%20-%20Khamoshiyan%20128%20Kbps.jpg"), new Label("Baateinh Ye kabhi na"),"https://pagalfree.com/musics/128-Baatein%20Ye%20Kabhi%20Na%20(Female)%20-%20Khamoshiyan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Tum%20Hi%20Aana%20-%20Marjaavaan%20128%20Kbps.jpg"), new Label(" Tu hi aana"),"https://pagalfree.com/musics/128-Tum%20Hi%20Aana%20-%20Marjaavaan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Thodi%20Jagah%20Female%20Version%20-%20Marjaavaan%20128%20Kbps.jpg"), new Label(" Thodi Jagah"),"https://pagalfree.com/musics/128-Thodi%20Jagah%20Female%20Version%20-%20Marjaavaan%20128%20Kbps.mp3"), 
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Hamari%20Adhuri%20Kahani%20-%20Hamari%20Adhuri%20Kahani%20128%20Kbps.jpg"), new Label("Hamari Adhuri Kahani"),"https://pagalfree.com/musics/128-Hamari%20Adhuri%20Kahani%20-%20Hamari%20Adhuri%20Kahani%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Agar%20Tum%20Saath%20Ho%20-%20Tamasha%20128%20Kbps.jpg"), new Label("Agar Tum Saath ho"),"https://pagalfree.com/musics/128-Agar%20Tum%20Saath%20Ho%20-%20Tamasha%20128%20Kbps.mp3"),  
	    new PlayListWidget(new Image("https://assets.telegraphindia.com/telegraph/7a724e8f-43a7-4434-b701-755779310e37.jpg"), new Label("Yeh Aaina"),"https://pagalfree.com/musics/128-Yeh%20Aaina%20-%20Kabir%20Singh%20128%20Kbps.mp3"), 
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Tujhse%20Naraz%20Nahin%20Zindagi%20-%20Female%20%20-%20Masoom%20128%20Kbps.jpg"), new Label("Tujhse Naraz Nahi Zindagi"),"https://pagalfree.com/musics/128-Tujhse%20Naraz%20Nahin%20Zindagi%20-%20Female%20%20-%20Masoom%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128O%20Saathi%20Re%20Female%20-%20Muqaddar%20Ka%20Sikandar%20128%20Kbps.jpg"), new Label("O Saathi Re"),"https://pagalfree.com/musics/128-O%20Saathi%20Re%20Female%20-%20Muqaddar%20Ka%20Sikandar%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Tere%20Bina%20Zindagi%20Se%20-%20Dil%20Vil%20Pyar%20Vyar%20128%20Kbps.jpg"), new Label("Tere Bina ZIndagi Se"),"https://pagalfree.com/musics/128-Tere%20Bina%20Zindagi%20Se%20-%20Dil%20Vil%20Pyar%20Vyar%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Tera%20Mujhse%20Hai%20Nata%20Koi%20(Duet)%20-%20Aa%20Gale%20Lag%20Jaa%20128%20Kbps.jpg"), new Label("Tera Mujhse Hai Nata Koi"),"https://pagalfree.com/musics/128-Tera%20Mujhse%20Hai%20Nata%20Koi%20(Duet)%20-%20Aa%20Gale%20Lag%20Jaa%20128%20Kbps.mp3")
    );

    static ObservableList<PlayListWidget> oldSongs = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Ham%20Chup%20Hain%20Lata%20Mangeshkar%20-%20Faasle%20128%20Kbps.jpg"), new Label("Hum Chup Hain"),"https://pagalfree.com/musics/128-Ham%20Chup%20Hain%20Lata%20Mangeshkar%20-%20Faasle%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Neela%20Aasman%20So%20Gaya%20Lata%20Mangeshkar%20-%20Silsila%20128%20Kbps.jpg"), new Label("Neela Aasama So Gaya"),"https://pagalfree.com/musics/128-Neela%20Aasman%20So%20Gaya%20Lata%20Mangeshkar%20-%20Silsila%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/128Doori%20Na%20Rahe%20Koi%20Lata%20Mangeshkar%20-%20Kartavya%20128%20Kbps.jpg"), new Label("Doori Na Rahe Koi"),"https://pagalfree.com/musics/128-Doori%20Na%20Rahe%20Koi%20Lata%20Mangeshkar%20-%20Kartavya%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Duniya%20Rang%20Badalti%20Jaye-Lata%20Mangeshkar%20-%20Jeevan%20Jyoti%20128%20Kbps.jpg"), new Label("Duniya Rang Badlati Jaye"),"https://pagalfree.com/musics/128-Duniya%20Rang%20Badalti%20Jaye-Lata%20Mangeshkar%20-%20Jeevan%20Jyoti%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Chori%20Chori%20Chupke%20Chupke%20-%20Krrish%20128%20Kbps.jpg"), new Label("Choori Choori Chupake Chupake"),"https://pagalfree.com/musics/128-Chori%20Chori%20Chupke%20Chupke%20-%20Krrish%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Mujhse%20Dosti%20Karoge%20-%20Koi%20Mere%20Dil%20Mein%20Hai%20128%20Kbps.jpg"), new Label("Mujhse Dosti Karogi"),"https://pagalfree.com/musics/128-Mujhse%20Dosti%20Karoge%20-%20Koi%20Mere%20Dil%20Mein%20Hai%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Is%20Tarah%20Aashiqui%20Ka%20Kumar%20Sanu%20-%20Imtihan%20128%20Kbps.jpg"), new Label("Is Tarah Aashiki Ka"),"https://pagalfree.com/musics/128-Is%20Tarah%20Aashiqui%20Ka%20Kumar%20Sanu%20-%20Imtihan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Dil%20Mera%20Dil%20Mera%20Dil%20-%20Indian%20Babu%20128%20Kbps.jpg"), new Label("Dil Mera Dil Mera"),"https://pagalfree.com/musics/128-Dil%20Mera%20Dil%20Mera%20Dil%20-%20Indian%20Babu%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Maye%20Ni%20Maye-Lata%20Mangeshkar%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.jpg"), new Label("Maye N Maye"),"https://pagalfree.com/musics/128-Maye%20Ni%20Maye-Lata%20Mangeshkar%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.mp3")
    );



    public static ScrollPane display(ObservableList<PlayListWidget> songList) {
        
        ListView<PlayListWidget> listView = new ListView<>(songList);
        listView.setCellFactory(param -> new CardCell());
        listView.setPrefSize(1400, 420);

        scrollPane = new ScrollPane(listView);
        scrollPane.setMaxWidth(1400);
        scrollPane.setMinHeight(420);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);

        return scrollPane;
    }

    //getKKList
    public static ScrollPane getGymList(){

        return display(GymSongs);
    }    

//getArjitList
    public static ScrollPane getDevotionalList(){

        return display(DevotionalSongs);
    }

//getShreyaList
    public static ScrollPane getChillOutList(){

        return display(chillOutList);
    }

//getSonuList
    public static ScrollPane getLoveList(){

        return display(loveSong);
    }

//getKKList
    public static ScrollPane getSadSongList(){

        return display(SadSongs);
    } 

//getLatadidi 
    public static ScrollPane getMashUpList(){

        return display(MashUpsSong);
    }
//getARRehman
    public static ScrollPane getLofiList(){

        return display(LofiSongList);
    }
    public static ScrollPane getOldList(){

        return display(oldSongs);
    }
}

class CardCell extends ListCell<PlayListWidget> {
    @Override
    protected void updateItem(PlayListWidget item, boolean empty) {
        super.updateItem(item, empty);

        if (item != null && !empty) {
            HBox cardLayout = new HBox(400);
            cardLayout.getChildren().add(item.getTitle());
            cardLayout.getChildren().add(item.getFullContent());
            cardLayout.getChildren().add(item.getIconButton());
            cardLayout.setPadding(new Insets(0, 0, 0, 50));
            setGraphic(cardLayout);
        } else {
            setGraphic(null);
        }
    }
}
