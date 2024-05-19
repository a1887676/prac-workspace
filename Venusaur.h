#ifndef VENUSAUR_H
#define VENUSAUR_H

#include <string>

class Venusaur : public EarthElement {
   protected:
   std::string name()

   public:
   Venusaur();
   Venusaur(std::string name);
   ~Venusaur();

   std::string getName();


};

#endif 