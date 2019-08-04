#!/bin/sh
find . -name "*.sh" -type f -execdir sh -c 'printf "%s\n" "${0%.*}"' {} ';'