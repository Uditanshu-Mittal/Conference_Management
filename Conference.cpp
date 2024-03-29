#include <iostream>
#include <string>
#include "DateTime.h"
#include "Venue.h"
#include "Sponsor.h"
#include "Participant.h"
#include "Organiser.h"
#include <map>


class Conference
{
    protected:
        DateTime datetime;
        Venue venue;
        Organiser organisers[30];
        Participant participants[500];
        Sponsor sponsors[20];
        double generated_amt;
        std :: string conference_id;
        std :: string name;

    public:
        static std :: map <std :: string, Conference*> conferenceMap;
        static int no_of_conferences;


    public:
    // Constructor
        Conference()
        {
            // Add this Conference instance to the map
            conferenceMap[name] = this;
        }

        // Method to get Conference instance by name
        static Conference* getConferenceByName(const std::string& name) 
        {
            if (conferenceMap.find(name) != conferenceMap.end()) 
            {
                return conferenceMap[name];
            } 
            else 
            {
                return nullptr;
            }
        }
        std :: string getName(){ return name; }
        

};
