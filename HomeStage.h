#include <SDL2/SDL.h>
#include "GraphicsFrameWork.h"
#include "Context.h"

struct Color {
    int r;
    int g;
    int b;
};
	
class HomeStage :Stage{

  
	
	
	public :
          Context *context;
		
          HomeStage(Context *ctx) : Stage(ctx) { context = ctx; }
          
          void logic();
          void update(GraphicsFrameWork *g);

        private:
          
          float button_size=250;
          bool animate_flag = true;
          Color start_btn, about_btn, resume_btn, exit_btn;
};