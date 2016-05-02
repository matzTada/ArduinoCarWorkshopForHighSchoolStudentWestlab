#ArduinoCarWorkshopForHighSchoolStudentWestlab

高校生体験会(2015)の時のプログラムと配線図

教える側が作った団扇カー  
（ほんとは，振動で動いてる）  
<a href="http://www.youtube.com/watch?feature=player_embedded&v=dkHKR7AGBmk
" target="_blank"><img src="http://img.youtube.com/vi/dkHKR7AGBmk/0.jpg" 
alt="movie on youtube" width=50% border="10" /></a>  
[movie on youtube](https://www.youtube.com/watch?v=dkHKR7AGBmk)  

##配線図 Wiring
サーボモータを3つ使うため，マイコン用電源に加えて，サーボ用電源を伸ばしてあげる必要があります．  
これがブレッドボードでの例を示していますが，ユニバーサル基盤に直接配線すればOKです． 
<a><img src="https://github.com/matzTada/ArduinoCarWorkShopForHighSchoolStudentWestlab/blob/master/wiring/wiringFor3ServoMotorsBreadboard.png" 
alt="pic01" width=50%></a>  
(Pololu A-Starのを作るか見つけるかしようかと思いましたが，nanoで代用してます．ごめんね．)  
**ピンがPWM出力可能かどうかはマイコンによって確認して下さい．ServoはPWM出力が可能なピンを用いないとうまく動きません．**  
マイコンボードにもよりますが，マイコンから出力できる電圧・電流量には当然ながら制限があります．  
Arduino UNOの場合はサーボを一つ動かすぐらいなら大丈夫ですが，二つ以上つなげると動いたり動かなかったりします．  
電圧が許容範囲内であるとしても，**電流量がオーバしていて動かない**よー, なんてことはよくあるので気を付けてみてください．  
そんな時は素直に外部電源をとってきましょう．  
ただし，通信がある場合などは**GNDを共有すること**が大切ですよ．  
(詳しくはLet's google it!)

##プログラムの書き込みについて
今回用いたマイコンは[Pololu A-Star 32U4 Mini LV](https://www.pololu.com/product/3103)でした．  
もしArduino互換のマイコンに対してArduino IDEから書き込みを行う場合，Arduino IDEにドライバを教えて上げる必要があります．  
今回使うマイコンの場合は<https://www.pololu.com/docs/0J61/6.2>に手順とドライバのリンクが書いてあるので参照してみてね．  
ちゃんとドライバを教えてあげないと，エラーをはいて一生動きません．ドンマイ．

