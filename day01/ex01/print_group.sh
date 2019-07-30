#!/bin/sh
groups=$(id -Gn $FT_USER) && printf ${groups// /,}