#ifndef BLASTOISE_H
#define BLASTOISE_H

#include <string>

class Blastoise : public WaterElement {
   protected:
   std::string name()

   public:
   Blastoise();
   Blastoise(std::string name);
   ~Blastoise();

   std::string getName();

       
};

#endif 