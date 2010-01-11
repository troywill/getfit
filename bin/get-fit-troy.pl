#!/usr/bin/env perl
use warnings;
use strict;
print `clear`;
my $initial_time = 1259717580; # December 1, 2009 5:33 PM
my $initial_weight = 183.6;
my $loss_rate = 240; # goal weight loss rate in cals/day, about 1 lb per week
my $lbs_per_second = $loss_rate / 3500 / 24 / 60 / 60;
my $weight_goal = &get_weight_goal($initial_time, $initial_weight, $lbs_per_second);

printf( "Initial weight: %.2f\n", $initial_weight);
print "Weight goal: $weight_goal\n";

sub get_weight_goal {
    my ( $initial_time, $initial_weight, $lbs_per_second ) = @_;
    my $elapsed_time = time - $initial_time;
    my $loss = $elapsed_time * $lbs_per_second;
    my $weight_goal = $initial_weight - $loss;
    $weight_goal = sprintf("%.2f",$weight_goal);
    return $weight_goal;
}
