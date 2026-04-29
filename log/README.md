# Log Directory

Place customer dump logs in subdirectories here. Each dump should be in its own folder.

## Structure

```
log/
  ├── dump-2026-04-28-1234567890/
  │   ├── hub.log
  │   ├── frontend.log
  │   ├── syslog
  │   ├── inscopix.json
  │   └── ... (other logs)
  │
  └── dump-2026-04-29-9876543210/
      ├── hub.log
      └── ... (other logs)
```

## Usage

When invoking the diagnostics agent, reference the path to the dump folder:

```
@Inscopix Log Diagnostics Agent
Problem: Laser shutdown after 20 minutes
Logs: log/dump-2026-04-28-1234567890
```

## Notes

- Individual log files (*.log, *.txt) are ignored by Git (see `.gitignore`)
- Only the directory structure is tracked
- Safe to upload real customer logs (internal use only)
