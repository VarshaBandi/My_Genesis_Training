#ifndef HOSPITAL_H
#define HOSPITAL_H

#include<iostream>

enum hospital_rating{
  Good,Average,Poor  
};

class hospital
{
    std::string hospital_id;
    std::string hospital_name;
    enum hospital_rating hr;
    public:
        hospital();
        hospital(std::string,std::string);
        virtual void display();
        virtual void accept();
        void printhospitals(hospital_rating);

        std::string gethospitalId() const { return hospital_id; }
        void setHospitalId(const std::string &hospitalId) { hospital_id = hospitalId; }
        std::string gethospitalName() const { return hospital_name; }
        void setHospitalName(const std::string &hospitalName) { hospital_name = hospitalName; }
        enum hospital_rating getHr() const { return hr; }
        void setHr(const enum hospital_rating &hr_) { hr = hr_; }
        friend void operator<<(std::ostream &os,hospital &h);
};

#endif // HOSPITAL_H
