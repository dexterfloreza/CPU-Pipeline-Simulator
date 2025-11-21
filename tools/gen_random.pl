#!/usr/bin/perl
use strict; use warnings;
for(1..20){
    my $rd=int(rand(32)); my $rs=int(rand(32)); my $imm=int(rand(1024))-512;
    print "addi x$rd, x$rs, $imm\n";
}
