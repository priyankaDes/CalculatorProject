# Deployment Guide - Inscopix Log Diagnostics Agent

## ✅ Setup Complete!

Your repository is now configured for GitHub Codespaces deployment.

## 📦 What Was Created

### Critical Files
- ✅ `.devcontainer/devcontainer.json` - Codespaces configuration
- ✅ `sample.env` - Password template for agent security
- ✅ `.gitignore` - Protects sensitive log files from being committed
- ✅ Enhanced `README.md` - User documentation

### Supporting Files
- ✅ `log/README.md` - Instructions for log directory
- ✅ `.github/CODEOWNERS` - Code review assignments
- ✅ `.github/workflows/validate-agent.yml` - Automated validation

## 🚀 Next Steps

### 1. Set Your Password
Edit `sample.env` and change the default password:
```env
AGENT_PASSWORD=your-secure-16-digit-password-here
```

### 2. Push to GitHub
```powershell
git add .
git commit -m "Configure agent for Codespaces deployment"
git push origin main
```

### 3. Test in Codespaces
1. Go to your GitHub repository
2. Click **Code** → **Codespaces** → **Create codespace on main**
3. Wait 30-60 seconds for environment setup
4. Open Copilot Chat (Ctrl+Alt+I)
5. Test with: `@Inscopix Log Diagnostics Agent` followed by a sample case

### 4. Share with Team
Send your team:
- Repository URL
- Instructions: "Click Code → Open with Codespaces"
- The 16-digit password (via secure channel)

## 🧪 Testing Checklist

Before rolling out to the full team:

- [ ] Codespace builds successfully
- [ ] GitHub Copilot Chat loads
- [ ] Agent appears in chat suggestions (@Inscopix...)
- [ ] Agent can read `sample.env`
- [ ] Agent can read `doc/known_issues.json`
- [ ] Upload a test dump to `log/` directory
- [ ] Invoke agent with test case
- [ ] Agent provides diagnosis with log citations
- [ ] Save diagnosis to known_issues.json (test append)

## 📊 Usage Workflow

**For support engineers:**

1. **Open Codespace** - From GitHub repo or existing instance
2. **Upload logs** - Drag dump folder to `log/` directory
3. **Invoke agent** - In Copilot Chat: `@Inscopix Log Diagnostics Agent`
4. **Provide inputs:**
   ```
   Problem: [Brief description]
   Logs: log/dump-YYYY-MM-DD-NNNNNNNNNN
   ```
5. **Review diagnosis** - Root cause, evidence, fix, confidence
6. **Apply fix** - Test workaround with customer
7. **Save case** (optional) - If diagnosis confirmed accurate

## 🔧 Troubleshooting

### Agent doesn't appear in Copilot Chat
- Ensure `.github/agents/Inscopix Log Diagnostics Agent.agent.md` exists
- Reload VS Code window (Ctrl+Shift+P → "Reload Window")
- Check Copilot is authenticated (status bar)

### Agent can't find logs
- Verify log path is relative: `log/dump-...` (not `C:\...`)
- Check files exist: `ls log/dump-...`
- Ensure dump folder contains at least hub.log

### Password doesn't work
- Verify `sample.env` exists in workspace root
- Check format: `AGENT_PASSWORD=1234567890123456` (no quotes)
- Copy password exactly (no spaces)

### GitHub Actions fails
- Check JSON syntax in `doc/known_issues.json`
- Run locally: `python -m json.tool doc/known_issues.json`

## 🎯 Optional Enhancements

Consider adding later (as needed):

- **Example sanitized logs** - Create `log/example-case/` with test data
- **Feedback tracking** - Create `doc/diagnosis_feedback.md` to track accuracy
- **Archive support** - Update agent to handle .zip files
- **Metrics dashboard** - Track cases/month, accuracy, common issues

## 📞 Questions?

Contact @priyanka-deshmukh or create an issue in the repository.

---

**Ready to deploy!** 🎉
