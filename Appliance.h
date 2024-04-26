#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
    int powerRating;
    bool isOn;

    public:
    Appliance();
    Appliance(int powerRating);
    
    void turnOn();
    void turnOff();
    bool get_isOn();

    void set_powerRating(int rating);
    int get_powerRating();

    virtual double getPowerConsumption();
    virtual ~Appliance();
};

#endif