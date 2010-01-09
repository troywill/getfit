#!/usr/bin/env perl
use warnings;
use strict;
print `clear`;
# Note: TDW Marv would like to get down to: 220 to 230
my $left_margin = "\t\t";
my $current_weight = 286.8;
my $initial_time = 1259717580; # December 1, 2009 5:33 PM
my $initial_weight = 307.7;
my $loss_rate = 500; # goal weight loss rate in cals/day, about 1 lb per week
my $lbs_per_second = $loss_rate / 3500 / 24 / 60 / 60;
my $weight_goal = &get_weight_goal($initial_time, $initial_weight, $lbs_per_second);

print "\n\n\n\n==============================================\n";
# printf( "${left_margin}Initial weight:\t%.2f\n", 307.7);
print "${left_margin}Weight goal:\t$weight_goal\n";
printf( "${left_margin}Current weight:\t%.2f\n", $current_weight);
printf( "${left_margin}Below Goal: \t %.2f\n", $weight_goal - $current_weight);
printf( "${left_margin}Weight Loss:\t %.2f\n", ($initial_weight - $current_weight));
&history();

print "\n${left_margin}Press Enter to quit";
<STDIN>;

sub get_weight_goal {
    my ( $initial_time, $initial_weight, $lbs_per_second ) = @_;
    my $elapsed_time = time - $initial_time;
    my $loss = $elapsed_time * $lbs_per_second;
    my $weight_goal = $initial_weight - $loss;
    $weight_goal = sprintf("%.2f",$weight_goal);
    return $weight_goal;
}

sub history {
    print "\n${left_margin}-- History --\n";
    print "${left_margin}Goal loss rate:\t52 lbs/year, begun December 1\n";

    printf( "${left_margin}Dec 1: %.2f\n", $initial_weight);
    printf( "${left_margin}Jan 4: %.2f\n", 292.2);
    printf( "${left_margin}Jan 6: %.2f\n", 290.8);
    printf( "${left_margin}Jan 7: %.2f\n", 286.8);
    printf( "${left_margin}Jan 8: %.2f\n", 286.6);
}

    # printf( "${left_margin}Jan 2: %.2f\n", 291.4);
    # printf( "${left_margin}Jan 4: %.2f\n", 292.2);
