SELECT 'id','name','start', 'end', 'nodeType', 'orgType', 'categories', 'url'
union
SELECT node.nid AS Id, node.title AS Label, field_data_field_com_date.field_com_date_value AS Start, field_data_field_com_date.field_com_date_value2 AS End, node.type AS Type, taxonomy_term_data_2.name AS Org_type, taxonomy_term_data.name AS Settori, CONCAT ("http://www.retebuonvivere.org/node/", node.nid) AS Url
FROM node
LEFT JOIN field_data_field_com_categories ON node.nid = field_data_field_com_categories.entity_id AND (field_data_field_com_categories.entity_type = 'node' AND field_data_field_com_categories.deleted = '0')
LEFT JOIN taxonomy_term_data ON field_data_field_com_categories.field_com_categories_tid = taxonomy_term_data.tid
LEFT JOIN field_data_field_org_type ON node.nid = field_data_field_org_type.entity_id AND (field_data_field_org_type.entity_type = 'node' AND field_data_field_org_type.deleted = '0')
LEFT JOIN taxonomy_term_data AS taxonomy_term_data_2 ON field_data_field_org_type.field_org_type_tid = taxonomy_term_data_2.tid
LEFT JOIN field_data_field_com_date ON node.nid = field_data_field_com_date.entity_id AND (field_data_field_com_date.entity_type = 'node' AND field_data_field_com_date.deleted = '0')
WHERE (( (node.status = '1') AND (node.type IN  ('org', 'project')) ))
GROUP BY Id
INTO OUTFILE '/var/www/rbv/site/sites/default/files/graph_data/nodes.csv' FIELDS TERMINATED BY ','
