#!/bin/sh
# awk pour supprimer les espaces debut / fin
ifconfig -a | grep "ether " | sed 's/ether//g' | awk '{$1=$1};1'