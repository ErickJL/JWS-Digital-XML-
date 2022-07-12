#include <DFRobotDFPlayerMini.h>
DFRobotDFPlayerMini myDFPlayer;
int nyala;
uint32_t mrtlN, mrtlP;
bool subuh=false, sb5=false, sbA=false;
int hitung=1;
int maxx=114;
int vol;

//void volume(){
//  String data = server.arg("plain");
//  vol = data.toInt();
//  myDFPlayer.volume(vol); 
//  String response = "{\"volume\":1}";
//  server.send(200, "/volume", response);
//}

void surat(){//void tampiljws
  mrtlN=millis();
  if(mrtlN-mrtlP>=2000){
    mrtlP=mrtlN;
    nyala=analogRead(A0);
    if(nyala>500){
//      myDFPlayer.volume(15);
//      myDFPlayer.playFolder(1, hitung);
      hitung++;
      if(hitung>maxx){
        hitung=1;
      }
    sb5=true;
    sbA=true;
    }
  }
}

void wktuAZAN(){
  if(sbA){
    myDFPlayer.volume(20);
    if(subuh){
//      myDFPlayer.playMp3Folder(2);
      subuh=false;
    }else{
//      myDFPlayer.playMp3Folder(1);
    }
    sbA=false;
  }
}

//void wktuAZAN(){//->loop
//  for (int i = 0; i <= 7; i++)
//  {
//    if(!configjws.ringimsyak and i==0){//optional skip imsyak
//      i++;
//    }
//    if (i != 2 and i != 3) // bukan terbit dan bukan dhuha
//    {
//      if (floatnow >= (stimeFloat[i]-(float)5/60))
//      {
//        if ((floatnow > (stimeFloat[i]-0.0003)) and (floatnow < ((stimeFloat[i]-0.0003) + 0.0014)))
//        {
//            while(pertama){
//              myDFPlayer.stop();
//              delay(200);
//              if(subuh){
//                myDFPlayer.playMp3Folder(2);
//                subuh=false;
//              }else{
//                myDFPlayer.playMp3Folder(1);
//              }
//              pertama=false;
//            }
//        }
//      }
//    }
//  }
//}

void sblmMnt5(){//->loop
  for (int i = 0; i <= 7; i++)
  {
    if(!configjws.ringimsyak and i==0){//optional skip imsyak
      i++;
    }
    if (i != 2 and i != 3) // bukan terbit dan bukan dhuha
    {
      if (floatnow >= (stimeFloat[i]-(float)5/60))
      {
        if ((floatnow > (stimeFloat[i]-(float)5/60)) and (floatnow < ((stimeFloat[i]-(float)5/60) + 0.0014)))
        {
          if(sb5){
            //myDFPlayer.pause();
//            laguKe=myDFPlayer.readCurrentFileNumber();
//            myDFPlayer.playFolder(5, 1);
//            myDFPlayer.volume(20);
//            switch(i){
//              
//              case 1 :
//                myDFPlayer.advertise(202);
//                sb5=false;
//                break;
//                
//              case 4 :
//                myDFPlayer.advertise(202);
//                sb5=false;
//                break;
//                
//              case 5 :
//                myDFPlayer.advertise(202);
//                sb5=false;
//                break;
//                
//              case 6 :
//                myDFPlayer.advertise(202);
//                sb5=false;
//                break;
//                
//              case 7 :
//                myDFPlayer.advertise(202);
//                sb5=false;
//                break;
//            }
          }
        }
      }
    }
  }
}

void setDF(){
  while (!myDFPlayer.begin(Serial)){
    //nothing
  }
  delay(200);
  myDFPlayer.reset();
  delay(500);
  myDFPlayer.volume(15);
  delay(10);
  myDFPlayer.playFolder(1, hitung);
  //myDFPlayer.playMp3Folder(2);
  hitung++;
}
