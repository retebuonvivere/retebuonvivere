SELECT 'source','sourceName','target','targetName','label','start','end','url'
union
SELECT node_field_data_field_rel_source.nid AS source, node_field_data_field_rel_source.title AS sourceName, node_field_data_field_relpro_project.nid AS target, node_field_data_field_relpro_project.title AS targetName, taxonomy_term_data.name AS label, field_data_field_com_date.field_com_date_value AS Start, field_data_field_com_date.field_com_date_value2 AS End, CONCAT ("http://www.retebuonvivere.org/node/", node.nid) AS url
FROM node
LEFT JOIN field_data_field_rel_source ON node.nid = field_data_field_rel_source.entity_id AND (field_data_field_rel_source.entity_type = 'node' AND field_data_field_rel_source.deleted = '0')
LEFT JOIN node AS node_field_data_field_rel_source ON field_data_field_rel_source.field_rel_source_target_id = node_field_data_field_rel_source.nid
LEFT JOIN field_data_field_relpro_project AS field_data_field_relpro_project ON node.nid = field_data_field_relpro_project.entity_id AND (field_data_field_relpro_project.entity_type = 'node' AND field_data_field_relpro_project.deleted = '0')
LEFT JOIN node AS node_field_data_field_relpro_project ON field_data_field_relpro_project.field_relpro_project_target_id = node_field_data_field_relpro_project.nid
LEFT JOIN field_data_field_rel_categories ON node.nid = field_data_field_rel_categories.entity_id AND (field_data_field_rel_categories.entity_type = 'node' AND field_data_field_rel_categories.deleted = '0')
LEFT JOIN taxonomy_term_data ON field_data_field_rel_categories.field_rel_categories_tid = taxonomy_term_data.tid
LEFT JOIN field_data_field_com_date ON node.nid = field_data_field_com_date.entity_id AND (field_data_field_com_date.entity_type = 'node' AND field_data_field_com_date.deleted = '0')
WHERE (( (node.status = '1') AND (node.type IN ('collaboration')) ))
INTO OUTFILE '/var/www/rbv/site/sites/default/files/graph_data/edges.csv' FIELDS TERMINATED BY ','
