.PHONY: run
run:
	poetry run python fizzbuzz.py

.PHONY: test
test:
	@echo "🦕[test] run pytest"
	poetry run pytest -v
	@echo "🦕[test] run flake8"
	poetry run flake8 --ignore=F541

.PHONY:build
build:
	docker-compose build --no-cache
