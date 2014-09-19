#!/bin/bash

mkdir /var/www/rbv/graph_data 2> /dev/null
chmod o+w /var/www/rbv/graph_data 2> /dev/null

NODES_PREFIX=/var/www/rbv/graph_data/nodes
EDGES_PREFIX=/var/www/rbv/graph_data/edges

rm $NODES_PREFIX.csv 2>/dev/null
rm $EDGES_PREFIX.csv 2>/dev/null
rm $NODES_PREFIX.json 2>/dev/null
rm $EDGES_PREFIX.json 2>/dev/null

cat /var/www/rbv/scripts/querys/nodes.sql | mysql -u rbv rbv 
cat /var/www/rbv/scripts/querys/edges.sql | mysql -u rbv rbv 

/usr/local/bin/csvjson -p \\ $NODES_PREFIX.csv >$NODES_PREFIX.json
/usr/local/bin/csvjson -p \\ $EDGES_PREFIX.csv >$EDGES_PREFIX.json

rm $NODES_PREFIX.csv 2>/dev/null
rm $EDGES_PREFIX.csv 2>/dev/null

touch /tmp/extract_data_executed
