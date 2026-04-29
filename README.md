# Inscopix Log Diagnostics Agent

An AI-powered diagnostics assistant for troubleshooting Inscopix hardware and software issues. This agent examines system dump logs and provides evidence-based root cause analysis with recommended fixes.

## 🎯 Purpose

This agent helps the customer support team:
- Analyze dump logs from nVista 2P, nVoke, and mini2p systems
- Identify root causes of hardware/software failures
- Provide immediate workarounds and permanent fixes
- Build institutional knowledge through case history

## 🚀 Quick Start (GitHub Codespaces)

### 1. Open in Codespaces
Click the "Code" button on GitHub → "Open with Codespaces" → "New codespace"

### 2. Upload Logs
Drag and drop the dump log folder into the `log/` directory:
```
log/
  └── dump-2026-04-28-1234567890/
      ├── hub.log
      ├── frontend.log
      ├── syslog
      ├── inscopix.json
      └── ... (other logs)
```

### 3. Invoke the Agent
Open **GitHub Copilot Chat** (Ctrl+Alt+I or Cmd+Alt+I) and type:

```
@Inscopix Log Diagnostics Agent

Problem: Laser is not turning on mid-session during triggered recordings
Logs: log/dump-2026-04-28-1234567890
```

### 4. Review Diagnosis
The agent will provide:
- **Root Cause** - What's causing the issue
- **Evidence** - Exact log citations (file, line number, excerpt)
- **Fix** - Immediate workaround + permanent solution
- **Confidence** - Accuracy percentage

### 5. Save to Knowledge Base (Optional)
If diagnosis is confirmed correct, the agent will ask:
> "Would you like to save this diagnosis to known_issues.json?"

Reply "yes" to add it to the case history.

## 📋 Required Log Files (Priority Order)

The agent examines these files automatically:
1. **hub.log** - Main application log (errors, warnings, communication)
2. **frontend.log** - UI and session state issues
3. **syslog** - OS-level events, crashes, USB/PCIe errors
4. **rc.local.log** - Startup issues
5. **janus.log** - Video/streaming issues
6. **mcu_regdump.txt** - MCU hardware register state
7. **mcu_hardware.txt** - Hardware configuration
8. **inscopix.json** - Software version and system config
9. **session.json** - Session parameters

## 📚 Knowledge Base

All confirmed diagnoses are stored in [`doc/known_issues.json`](doc/known_issues.json). The agent checks this database before analyzing new cases to identify similar issues.

## 🔐 Security

- **Password protected** - Agent modifications require a 16-digit password (stored in `sample.env`)
- **Internal use only** - This agent is for Inscopix support team members
- **No data modification** - Agent cannot delete or modify logs (read-only)

## 💡 Example Usage

**Simple case:**
```
@Inscopix Log Diagnostics Agent
Problem: System freezes during preview
Logs: log/dump-2026-04-28-1234567890
```

**Resume existing case:**
```
@Inscopix Log Diagnostics Agent
Token: ISX-20260428-0001
Additional info: Customer confirmed the workaround resolved the issue
```

## 🛠️ Local Development

If running locally (not in Codespaces):

```bash
# Ensure you have Python 3.11+
python --version

# Install any required dependencies
# (Currently none - agent uses GitHub Copilot)
```

## 📖 Documentation

- [`doc/known_issues.json`](doc/known_issues.json) - Historical case database
- [`.github/agents/`](.github/agents/) - Agent configuration files

## 🤝 Contributing

To modify the agent behavior:
1. Edit `.github/agents/Inscopix Log Diagnostics Agent.agent.md`
2. Test with sample logs before deploying
3. Request 16-digit password for protected operations

## 📞 Support

Questions about the agent? Contact the tools team or create an issue in this repository.

---

**Version:** 1.0  
**Last Updated:** April 2026  
**Maintained by:** Inscopix Support Engineering
