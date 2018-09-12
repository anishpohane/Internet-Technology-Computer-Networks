#include <click/config.h>
#include "changeContents.hh"
#include <click/args.hh>
CLICK_DECLS

ChangeContents::ChangeContents()
{
}

int
ChangeContents::configure(Vector<String> &conf, ErrorHandler *errh)
{
    return Args(conf, this, errh)
        .read_mp("DATA", _data).complete();
}

Packet *
ChangeContents::simple_action(Packet *p)
{

(Note: Complete Code not copied to github, can be provided on request)

}
CLICK_ENDDECLS
EXPORT_ELEMENT(ChangeContents)
ELEMENT_MT_SAFE(ChangeContents)