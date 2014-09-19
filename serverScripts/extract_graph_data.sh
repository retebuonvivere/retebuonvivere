#!/bin/bash

DATA_PATH=/var/www/rbv/site/sites/default/files/graph_data
mkdir     $DATA_PATH 2> /dev/null
chmod o+w $DATA_PATH 2> /dev/null

NODES_PREFIX=$DATA_PATH/nodes
EDGES_PREFIX=$DATA_PATH/edges

rm $NODES_PREFIX.csv 2> /dev/null
rm $EDGES_PREFIX.csv 2> /dev/null
rm $NODES_PREFIX.json 2> /dev/null
rm $EDGES_PREFIX.json 2> /dev/null

cd $DATA_PATH

cat /var/www/rbv/scripts/querys/nodes.sql | mysql -u rbv rbv 
cat /var/www/rbv/scripts/querys/edges.sql | mysql -u rbv rbv 

/usr/local/bin/csvjson -p \\ $NODES_PREFIX.csv >$NODES_PREFIX.json
/usr/local/bin/csvjson -p \\ $EDGES_PREFIX.csv >$EDGES_PREFIX.json

rm $NODES_PREFIX.csv 2>/dev/null
rm $EDGES_PREFIX.csv 2>/dev/null

touch /tmp/extract_data_executed

