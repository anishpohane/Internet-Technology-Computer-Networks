#ifndef CLICK_CHANGECONTENTS_HH
#define CLICK_CHANGECONTENTS_HH

#include <click/element.hh>

CLICK_DECLS

class ChangeContents : public Element {

public:
        ChangeContents() CLICK_COLD;

        const char *class_name() const { return "ChangeContents";}
        const char *port_count() const { return "1/1"; }
        const char *processing() const { return PUSH; }

        int configure(Vector<String>&, ErrorHandler*) CLICK_COLD;

        Packet* simple_action(Packet *);

private:
        String _data;
};

CLICK_ENDDECLS

#endif