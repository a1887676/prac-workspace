#ifndef CHARIZARD_H
#define CHARIZARD_H

#include <string>

class Charizard : public FireElement {
   protected:
   std::string name()

   public:
   Charizard();
   Charizard(std::string name);
   ~Charizard();

   std::string getName();



       
};

#endif 