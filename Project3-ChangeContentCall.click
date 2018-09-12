
RatedSource("HelloTestingMyOldFriend", RATE 1, LIMIT 5, ACTIVE true, STOP true)
 ->Print('Packet before change',CONTENTS ASCII)
 ->changeContents(NewPacket)
 ->Print('Packet received at click',CONTENTS ASCII)
 ->Discard;
