#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>

class doctor
{
    std::string doctor_id;
    std::string doctor_name;
    std::string doctor_speciality;
    std::string registered_hospital_name;
    float doctor_fees;
    public:
        doctor();
        doctor(std::string,std::string,std::string,std::string,float);
        friend void operator<<(std::ostream &os,doctor &d);
        void display();
        void accept();
        void calculatetax();

        std::string getdoctorId() const { return doctor_id; }
        void setDoctorId(const std::string &doctorId) { doctor_id = doctorId; }
        std::string getdoctorName() const { return doctor_name; }
        void setDoctorName(const std::string &doctorName) { doctor_name = doctorName; }
        std::string getdoctorSpeciality() const { return doctor_speciality; }
        void setDoctorSpeciality(const std::string &doctorSpeciality) { doctor_speciality = doctorSpeciality; }
        std::string getregisteredHospitalName() const { return registered_hospital_name; }
        void setRegisteredHospitalName(const std::string &registeredHospitalName) { registered_hospital_name = registeredHospitalName; }

        float getdoctorFees() const { return doctor_fees; }
        void setDoctorFees(float doctorFees) { doctor_fees = doctorFees; }
};

#endif // DOCTOR_H
