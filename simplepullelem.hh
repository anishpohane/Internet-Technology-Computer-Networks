#ifndef CLICK_SIMPLEPULLELEMENT_HH
#define CLICK_SIMPLEPULLELEMENT_HH

#include <click/element.hh>

CLICK_DECLS

class SimplePullElement : public Element {

public:
        SimplePullElement();
        ~SimplePullElement();

        const char *class_name() const { return "SimplePullElement";}
        const char *port_count() const { return "1/1"; }
        const char *processing() const { return PULL; }
// Declare configure function to receive packet parameter
        int configure(Vector<String>&, ErrorHandler*);
//Declare pull function to fetch packet;
Packet* pull(int i);
private:
        uint32_t maxSize;

};

CLICK_ENDDECLS
#endif
