#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup();
  


}
void loop ()
{
  for(int z=0;z<8;z++)
  {
  for(int x=0;x<8;x++)
   {
      for(int y=0;y<8;y++)
        {

          
           DrawPx(x, y,z);
           DisplaySlate();
           
           if (z <= 6)
             z=z+1;
             else z = 1;
        }  
   }
   delay(200);
  }
}
