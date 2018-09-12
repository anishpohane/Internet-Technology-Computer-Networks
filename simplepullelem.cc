#include <click/config.h>
#include <click/confparse.hh>
#include <click/error.hh>
#include "simplepullelem.hh"

CLICK_DECLS
SimplePullElement::SimplePullElement(){}
SimplePullElement::~SimplePullElement(){}

//Configure function to get parameter "MAXPACKETSIZE"
int SimplePullElement::configure(Vector<String> &conf, ErrorHandler *errh) {
        if (cp_va_kparse(conf, this, errh, "MAXPACKETSIZE", cpkM, cpInteger, &maxSize, cpEnd) < 0)
                return -1;
        if (maxSize <= 0) return errh->error("maxsize should be larger than 0");
        return 0;
}
//Pull function to return Packet 
Packet *SimplePullElement::pull(int port)
{

(Note: Complete Code not copied to github, can be provided on request)

}

CLICK_ENDDECLS
EXPORT_ELEMENT(SimplePullElement)
