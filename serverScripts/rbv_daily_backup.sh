#!/bin/bash

# retebuonvivere.org daily backup

cd /var/www/rbv/site

/usr/bin/drush archive-dump --destination=/var/www/rbv/rbv_backups/backup-$(date +%F).tar.gz

echo "Backup launched on $(date +%F_%H-%M)" >> /var/www/rbv/rbv_backups/backups.log

cd -

exit 0

