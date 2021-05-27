//主页界面

#include "HomeStage.h"

#include <vector>
#include <math.h>
using namespace std;
//std::vector<SDL_Point *> *heartdata;

/*
HomeStage::HomeStage(Context *ctx) :Stage(ctx) {
//  heartdata = new SDL_Point[600];
  //heartdata = new std::vector<SDL_Point*>();
  
	}
*/


void HomeStage::logic() {
	
}

      void HomeStage::update(GraphicsFrameWork * g) {

        //  i++;
        // sprintf(str, "%d", i);

        //  g->Clear();
        g->Cls(0, 0, 0);
        // g->Text(str, 250, 300, 200, 255, 255,        255);

        g->Text("跳跃小球",g->getSCRW()/4.5, g->getSCRH()/8, 150, 255, 255, 255);
        g->Text("Power By SDL2", g->getSCRW()/2.7, g->getSCRH() - 200, 40, 255, 255, 0);
        g->fillRect(g->getSCRW()/5
, g->getSCRH()/1.8, 300, 128, 255,
                    0, 0);
        g->Text("开始新游戏", g->getSCRW() / 5, g->getSCRH() / 1.8+35,45, 255,255,255);
        
        
         g->fillRect(g->getSCRW()/2
, g->getSCRH()/1.8, 300, 128, 255,
                    0, 0);
        g->Text("关于帮助", g->getSCRW() / 2, g->getSCRH() / 1.8+35,45, 255,255,255);
        
        
        
        g->fillRect(g->getSCRW()/5
, g->getSCRH()/1.6, 300, 128, 255,
                    0, 0);
        g->Text("继续游戏", g->getSCRW() / 5, g->getSCRH() / 1.6+35,45, 255,255,255);
        
        
         g->fillRect(g->getSCRW()/2
, g->getSCRH()/1.6, 300, 128, 255,
                    0, 0);
        g->Text("退出游戏", g->getSCRW() / 2, g->getSCRH() / 1.6+35,45, 255,255,255);
        
        
        
        
        // g->DrawPoint(200, 200,  255, 0,0);
        g->Show();
      }