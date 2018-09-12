
//
// Compound class that provide a port abstraction for a router
//


//Changed to add 7 parameters
elementclass RouterPort { DEV $dev, IN_ADDR $in_addr, OUT_ADDR $out_addr, IN_PORT $in_port, OUT_PORT $out_port, IN_MAC $in_mac, OUT_MAC $out_mac |

//Add filtering based on ips and macs
out_dev :: ToDevice($dev)
in_dev :: FromDevice($dev)

//in and out queues
in_queue::Queue();
out_queue_data::Queue();

input -> EtherEncap(0x0800, $in_mac, $out_mac)
      -> out_queue_data
 ->Print('Sending to $dev',CONTENTS ASCII)
          -> out_dev

//missing the arp part
in_dev -> in_queue
       -> Unqueue
       -> HostEtherFilter($in_mac, DROP_OWN true) // check that the mac address is proper
       -> Strip(14)
 ->Print('Received from $dev',CONTENTS ASCII)
       -> output

}
